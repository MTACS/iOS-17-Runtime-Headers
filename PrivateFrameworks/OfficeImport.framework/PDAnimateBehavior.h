
@interface PDAnimateBehavior : PDTimeNode {
    NSMutableArray * mAttributeNames;
    PDAnimationTarget * mTgtElement;
}

@property (nonatomic, retain) NSMutableArray *attributeNames;

- (void).cxx_destruct;
- (id)attributeNames;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (bool)isEqual:(id)arg1;
- (void)setAttributeNames:(id)arg1;
- (void)setTarget:(id)arg1;
- (id)target;

@end
