#include "pme_trained_neurons.h"

static qm_pme_neuron_vector_t kb_neuron_vectors_0[MAX_NUM_NEURONS_0] = 
{
	{.vector={192, 145, 199, 22, 91, 253, 146, 172}},
	{.vector={148, 167, 185, 75, 233, 88, 243, 70}},
	{.vector={0, 10, 118, 255, 48, 33, 33, 95}},
	{.vector={0, 6, 233, 110, 248, 83, 219, 45}},
	{.vector={251, 249, 255, 161, 42, 44, 76, 88}},
	{.vector={0, 145, 219, 61, 83, 244, 172, 177}},
	{.vector={3, 9, 0, 233, 52, 24, 4, 40}},
	{.vector={0, 255, 61, 167, 55, 45, 39, 41}},
	{.vector={0, 9, 72, 246, 46, 27, 37, 56}},
	{.vector={194, 192, 195, 31, 108, 245, 156, 198}},
	{.vector={4, 6, 29, 195, 47, 40, 53, 40}},
	{.vector={133, 6, 38, 221, 57, 16, 29, 45}},
	{.vector={197, 195, 186, 38, 65, 220, 131, 191}},
	{.vector={194, 144, 203, 66, 63, 245, 148, 234}},
	{.vector={0, 168, 161, 44, 235, 101, 248, 85}},
	{.vector={0, 0, 118, 246, 60, 13, 37, 15}},
	{.vector={193, 6, 198, 65, 86, 251, 158, 195}},
	{.vector={0, 168, 217, 51, 233, 72, 254, 73}},
	{.vector={0, 167, 174, 52, 221, 72, 223, 45}},
	{.vector={253, 251, 188, 120, 76, 30, 54, 91}},
	{.vector={1, 98, 20, 189, 32, 37, 28, 73}},
	{.vector={192, 145, 174, 45, 114, 249, 148, 233}},
	{.vector={147, 9, 202, 95, 237, 79, 215, 24}},
	{.vector={2, 10, 78, 206, 47, 40, 47, 20}},
	{.vector={0, 168, 210, 96, 223, 64, 218, 76}},
};
qm_pme_neuron_attribute_t kb_neuron_attribs_0[MAX_NUM_NEURONS_0] = 
{
	{ .influence=47, .category=3 },
	{ .influence=147, .category=4 },
	{ .influence=46, .category=5 },
	{ .influence=138, .category=5 },
	{ .influence=46, .category=5 },
	{ .influence=150, .category=5 },
	{ .influence=49, .category=1 },
	{ .influence=150, .category=5 },
	{ .influence=40, .category=1 },
	{ .influence=43, .category=3 },
	{ .influence=49, .category=1 },
	{ .influence=131, .category=5 },
	{ .influence=50, .category=5 },
	{ .influence=51, .category=3 },
	{ .influence=40, .category=5 },
	{ .influence=40, .category=5 },
	{ .influence=139, .category=3 },
	{ .influence=43, .category=4 },
	{ .influence=44, .category=4 },
	{ .influence=150, .category=2 },
	{ .influence=88, .category=1 },
	{ .influence=150, .category=3 },
	{ .influence=146, .category=4 },
	{ .influence=150, .category=1 },
	{ .influence=150, .category=4 },
};
kb_classifier_row_t kb_classifier_rows[1] = {
	

	{
		.classifier_id=0,
		.num_patterns=NUM_NEURONS_0,
		.pattern_size=8,
		.max_patterns=MAX_NUM_NEURONS_0,
		.num_classes=NUM_CLASSES_0,
		.num_channels=1,
		.classifier_mode=KB_CLASSIFICATION_RBF,
		.norm_mode=KB_DISTANCE_LSUP,
		.stored_patterns=kb_neuron_vectors_0,
		.stored_attribs=kb_neuron_attribs_0,
	},
};

const int32_t neurons_count = KB_TOTAL_NUMBER_OF_NEURONS;
