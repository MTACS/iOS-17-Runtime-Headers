
@interface TSUBasicProgress : TSUProgress {
    TSUBasicProgressStorage * mStorage;
}

@property (getter=isIndeterminate) bool indeterminate;
@property double value;

- (void)dealloc;
- (id)init;
- (id)initWithMaxValue:(double)arg1;
- (bool)isIndeterminate;
- (double)maxValue;
- (void)setIndeterminate:(bool)arg1;
- (void)setValue:(double)arg1;
- (double)value;

@end
