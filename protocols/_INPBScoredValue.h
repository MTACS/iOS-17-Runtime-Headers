
@protocol _INPBScoredValue <NSObject>

@required

- (bool)hasScore;
- (bool)hasValue;
- (long long)score;
- (void)setHasScore:(bool)arg1;
- (void)setScore:(long long)arg1;
- (void)setValue:(NSString *)arg1;
- (NSString *)value;

@end
