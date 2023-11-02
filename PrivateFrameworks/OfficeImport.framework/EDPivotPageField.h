
@interface EDPivotPageField : NSObject {
    NSString * mCap;
    unsigned long long  mFieldId;
    NSString * mName;
}

+ (id)pivotPageField;

- (void).cxx_destruct;
- (id)cap;
- (id)description;
- (unsigned long long)fieldId;
- (id)init;
- (id)name;
- (void)setCap:(id)arg1;
- (void)setFieldId:(unsigned long long)arg1;
- (void)setName:(id)arg1;

@end
