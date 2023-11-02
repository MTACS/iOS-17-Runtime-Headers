
@interface CDMMentionResolverService : CDMDAGBaseService {
    MRRMultimodalMentionResolver * _mentionResolver;
    NSArray * _overrideMentionsForReplay;
}

@property (nonatomic, retain) MRRMultimodalMentionResolver *mentionResolver;
@property (nonatomic, readonly) NSArray *overrideMentionsForReplay;

+ (id)getAssetFolderNamesByTrialFactorNames;
+ (bool)isAssetRequired;
+ (bool)isEnabled;

- (void).cxx_destruct;
- (id)getPredictor:(id)arg1 forLocale:(id)arg2 status:(id*)arg3;
- (id)handle:(id)arg1;
- (id)handleRequestCommandTypeNames;
- (id)mentionResolver;
- (id)overrideMentionsForReplay;
- (id)predictWithInput:(id)arg1 forLocale:(id)arg2 status:(id*)arg3;
- (void)setMentionResolver:(id)arg1;
- (id)setup:(id)arg1;

@end
