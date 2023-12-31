
@interface TLAlertStoppingOptions : NSObject <NSCopying> {
    double  _fadeOutDuration;
    bool  _shouldWaitUntilEndOfCurrentRepetition;
}

@property (nonatomic) double fadeOutDuration;
@property (nonatomic) bool shouldWaitUntilEndOfCurrentRepetition;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (double)fadeOutDuration;
- (unsigned long long)hash;
- (id)init;
- (bool)isEqual:(id)arg1;
- (void)setFadeOutDuration:(double)arg1;
- (void)setShouldWaitUntilEndOfCurrentRepetition:(bool)arg1;
- (bool)shouldWaitUntilEndOfCurrentRepetition;

@end
