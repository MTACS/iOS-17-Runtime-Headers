
@interface CDMDateTimeProtoSpanMatcher : NSObject <CDMProtoSpanMatcher> {
    UPDataDetectors * _upDataDetectors;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)buildMatchingSpan:(id)arg1 tokenChain:(id)arg2;
+ (id)getAssetFolderNamesByTrialFactorNames;

- (void).cxx_destruct;
- (id)initWithDataDetectorPath:(id)arg1 locale:(id)arg2;
- (id)matchSpansForTokenChain:(id)arg1;

@end
