
@interface _EARLanguageDetectorResult : NSObject {
    NSDictionary * _confidences;
    bool  _isConfident;
}

@property (nonatomic, copy) NSDictionary *confidences;
@property (nonatomic) bool isConfident;

- (void).cxx_destruct;
- (id)confidences;
- (bool)isConfident;
- (void)setConfidences:(id)arg1;
- (void)setIsConfident:(bool)arg1;

@end
