
@interface ODDShapeAdjustment : NSObject {
    unsigned int  mIndex;
    double  mValue;
}

- (id)description;
- (unsigned int)index;
- (void)setIndex:(unsigned int)arg1;
- (void)setValue:(double)arg1;
- (double)value;

@end
