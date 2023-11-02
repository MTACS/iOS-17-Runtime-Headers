
@interface SBPIPContentViewLayoutSizePreferences : NSObject {
    double  _longSideDefaultSize;
    double  _longSideMaximumSize;
    double  _longSideMinimumSize;
    double  _shortSideMinimumSize;
}

@property (nonatomic) double longSideDefaultSize;
@property (nonatomic) double longSideMaximumSize;
@property (nonatomic) double longSideMinimumSize;
@property (nonatomic) double shortSideMinimumSize;

- (id)initWithLongSideMinimumSize:(double)arg1 longSideDefaultSize:(double)arg2 longSideMaximumSize:(double)arg3 shortSideMinimumSize:(double)arg4;
- (double)longSideDefaultSize;
- (double)longSideMaximumSize;
- (double)longSideMinimumSize;
- (void)setLongSideDefaultSize:(double)arg1;
- (void)setLongSideMaximumSize:(double)arg1;
- (void)setLongSideMinimumSize:(double)arg1;
- (void)setShortSideMinimumSize:(double)arg1;
- (double)shortSideMinimumSize;

@end
