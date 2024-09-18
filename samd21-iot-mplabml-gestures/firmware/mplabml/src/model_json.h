#ifndef __MODEL_JSON_H__
#define __MODEL_JSON_H__

const char recognition_model_string_json[] = {"{\"NumModels\":1,\"ModelIndexes\":{\"0\":\"VIBRATION_ANALYSIS_1_RANK_1\"},\"ModelDescriptions\":[{\"Name\":\"VIBRATION_ANALYSIS_1_RANK_1\",\"ClassMaps\":{\"1\":\"OFF\",\"2\":\"ON1\",\"3\":\"ON2\",\"4\":\"ON3\",\"5\":\"Unknown\",\"0\":\"Unknown\"},\"ModelType\":\"PME\",\"FeatureFunctions\":[\"DominantFrequency\",\"DominantFrequency\",\"MFCC\",\"MFCC\",\"MFE\",\"MFE\",\"MFE\",\"PowerSpectrum\"]}]}"};

int32_t recognition_model_string_json_len = sizeof(recognition_model_string_json);

#endif /* __MODEL_JSON_H__ */
