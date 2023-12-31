
@interface EDPivotAreaReference : NSObject {
    bool  mByPosition;
    unsigned long long  mCount;
    unsigned long long  mFieldId;
    bool  mRelative;
    bool  mSelected;
}

+ (id)pivotAreaReference;

- (bool)byPosition;
- (unsigned long long)count;
- (id)description;
- (unsigned long long)fieldId;
- (id)init;
- (bool)relative;
- (bool)selected;
- (void)setByPosition:(bool)arg1;
- (void)setCount:(unsigned long long)arg1;
- (void)setFieldId:(unsigned long long)arg1;
- (void)setRelative:(bool)arg1;
- (void)setSelected:(bool)arg1;

@end
