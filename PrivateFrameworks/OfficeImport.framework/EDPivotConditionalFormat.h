
@interface EDPivotConditionalFormat : NSObject {
    EDCollection * mPivotAreas;
    unsigned long long  mPriority;
    int  mScope;
    int  mType;
}

+ (id)pivotConditionalFormat;

- (void).cxx_destruct;
- (id)description;
- (id)init;
- (id)pivotAreas;
- (unsigned long long)priority;
- (int)scope;
- (void)setPriority:(unsigned long long)arg1;
- (void)setScope:(int)arg1;
- (void)setType:(int)arg1;
- (int)type;

@end
