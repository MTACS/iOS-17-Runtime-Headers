
@interface QSSMutableShortcutFuzzyMatchRequest_StringTokenPair : QSSShortcutFuzzyMatchRequest_StringTokenPair

@property (nonatomic, copy) NSString *raw_string;
@property (nonatomic, copy) NSArray *tokens;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (id)raw_string;
- (void)setRaw_string:(id)arg1;
- (void)setTokens:(id)arg1;
- (id)tokens;

@end
