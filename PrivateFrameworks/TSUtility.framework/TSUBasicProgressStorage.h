
@interface TSUBasicProgressStorage : NSObject {
    bool  mIndeterminate;
    double  mMaxValue;
    double  mValue;
}

@property (getter=isIndeterminate) bool indeterminate;
@property double maxValue;
@property double value;

- (bool)isIndeterminate;
- (double)maxValue;
- (void)setIndeterminate:(bool)arg1;
- (void)setMaxValue:(double)arg1;
- (void)setValue:(double)arg1;
- (double)value;

@end
