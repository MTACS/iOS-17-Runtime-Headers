
@interface CVNLPCaptionRuntimeReplacements : NSObject {
    NSNumber * _genderOption;
    NSString * _replacementKey;
    double  _replacementProb;
    NSString * _replacementValue;
}

@property (nonatomic, readonly) NSNumber *genderOption;
@property (nonatomic, readonly) NSString *replacementKey;
@property (nonatomic, readonly) double replacementProb;
@property (nonatomic, readonly) NSString *replacementValue;

- (void).cxx_destruct;
- (id)genderOption;
- (id)initWithKey:(id)arg1 value:(id)arg2 prob:(double)arg3 genderOption:(id)arg4;
- (id)replacementKey;
- (double)replacementProb;
- (id)replacementValue;

@end
