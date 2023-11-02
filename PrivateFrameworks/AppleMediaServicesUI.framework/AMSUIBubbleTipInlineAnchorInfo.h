
@interface AMSUIBubbleTipInlineAnchorInfo : NSObject {
    unsigned long long  _arrowDirection;
    double  _arrowOffset;
    double  _relativeArrowOffset;
}

@property (nonatomic) unsigned long long arrowDirection;
@property (nonatomic) double arrowOffset;
@property (nonatomic) double relativeArrowOffset;

- (unsigned long long)arrowDirection;
- (double)arrowOffset;
- (id)initWithArrowDirection:(unsigned long long)arg1 arrowOffset:(double)arg2;
- (id)initWithArrowDirection:(unsigned long long)arg1 relativeArrowOffset:(double)arg2;
- (double)relativeArrowOffset;
- (void)setArrowDirection:(unsigned long long)arg1;
- (void)setArrowOffset:(double)arg1;
- (void)setRelativeArrowOffset:(double)arg1;

@end
