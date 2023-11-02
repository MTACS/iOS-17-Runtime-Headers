
@interface FTMutableShortcutFuzzyMatchResponse_ShortcutScorePair : FTShortcutFuzzyMatchResponse_ShortcutScorePair

@property (nonatomic, copy) NSString *shortcut;
@property (nonatomic) double similarity_score;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (void)setShortcut:(id)arg1;
- (void)setSimilarity_score:(double)arg1;
- (id)shortcut;
- (double)similarity_score;

@end
