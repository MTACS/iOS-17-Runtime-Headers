
@interface PGLabeledFloatVector : NSObject {
    MAFloatVector * _floatVector;
    MAFloatVector * _label;
}

@property (nonatomic, readonly) MAFloatVector *floatVector;
@property (nonatomic, readonly) MAFloatVector *label;

- (void).cxx_destruct;
- (id)floatVector;
- (id)initWithFloatVector:(id)arg1 label:(id)arg2;
- (id)label;

@end
