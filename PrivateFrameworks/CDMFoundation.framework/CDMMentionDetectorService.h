
@interface CDMMentionDetectorService : CDMDAGBaseService {
    MRRMultimodalMentionDetector * _mentionDetector;
}

@property (nonatomic, retain) MRRMultimodalMentionDetector *mentionDetector;

+ (id)getAssetFolderNamesByTrialFactorNames;
+ (bool)isAssetRequired;
+ (bool)isEnabled;

- (void).cxx_destruct;
- (id)getPredictor:(id)arg1 forLocale:(id)arg2 status:(id*)arg3;
- (id)handle:(id)arg1;
- (id)handleRequestCommandTypeNames;
- (id)mentionDetector;
- (id)predictWithInput:(id)arg1 forLocale:(id)arg2 status:(id*)arg3;
- (void)setMentionDetector:(id)arg1;
- (id)setup:(id)arg1;

@end
