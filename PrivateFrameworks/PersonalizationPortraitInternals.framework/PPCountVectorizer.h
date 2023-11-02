
@interface PPCountVectorizer : NSObject <MLCustomModel> {
    NSString * _inputName;
    NSString * _outputName;
    NSMutableDictionary * _vocabulary;
}

- (void).cxx_destruct;
- (id)initWithModelDescription:(id)arg1 parameterDictionary:(id)arg2 error:(id*)arg3;
- (id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id*)arg3;

@end
