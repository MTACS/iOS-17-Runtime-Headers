
@protocol CDMProtoSpanMatcher <NSObject>

@required

+ (NSDictionary *)getAssetFolderNamesByTrialFactorNames;

- (NSArray *)matchSpansForTokenChain:(CDMTokenChain *)arg1;

@end
