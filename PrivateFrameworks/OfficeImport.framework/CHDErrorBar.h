
@interface CHDErrorBar : NSObject {
    CHDChart * mChart;
    int  mDirection;
    OADGraphicProperties * mGraphicProperties;
    CHDData * mMinusValues;
    bool  mNoEndCap;
    CHDData * mPlusValues;
    int  mType;
    double  mValue;
    int  mValueType;
}

+ (id)errorBarWithChart:(id)arg1;

- (void).cxx_destruct;
- (id)description;
- (int)direction;
- (id)graphicProperties;
- (id)initWithChart:(id)arg1;
- (bool)isNoEndCap;
- (id)minusValues;
- (id)plusValues;
- (void)setDirection:(int)arg1;
- (void)setGraphicProperties:(id)arg1;
- (void)setMinusValues:(id)arg1;
- (void)setNoEndCap:(bool)arg1;
- (void)setPlusValues:(id)arg1;
- (void)setType:(int)arg1;
- (void)setValue:(double)arg1;
- (void)setValueType:(int)arg1;
- (int)type;
- (double)value;
- (int)valueType;

@end
