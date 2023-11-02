
@protocol _INPBConfidenceScoreComponent <NSObject>

@required

- (bool)hasScore;
- (bool)hasSource;
- (float)score;
- (void)setHasScore:(bool)arg1;
- (void)setScore:(float)arg1;
- (void)setSource:(NSString *)arg1;
- (NSString *)source;

@end
