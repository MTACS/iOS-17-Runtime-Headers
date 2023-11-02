
@interface SBRecordingIndicatorView : UIView {
    unsigned long long  _indicatorShape;
}

@property (nonatomic) unsigned long long indicatorShape;

- (unsigned long long)indicatorShape;
- (void)layoutSubviews;
- (void)setIndicatorShape:(unsigned long long)arg1;

@end
