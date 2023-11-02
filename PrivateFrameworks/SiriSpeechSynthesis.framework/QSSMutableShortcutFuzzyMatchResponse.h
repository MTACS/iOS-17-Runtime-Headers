
@interface QSSMutableShortcutFuzzyMatchResponse : QSSShortcutFuzzyMatchResponse

@property (nonatomic) int return_code;
@property (nonatomic, copy) NSArray *shortcut_score_pairs;
@property (nonatomic, copy) NSString *utterance;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (int)return_code;
- (void)setReturn_code:(int)arg1;
- (void)setShortcut_score_pairs:(id)arg1;
- (void)setUtterance:(id)arg1;
- (id)shortcut_score_pairs;
- (id)utterance;

@end
