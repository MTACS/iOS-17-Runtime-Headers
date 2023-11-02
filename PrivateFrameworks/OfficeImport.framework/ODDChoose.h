
@interface ODDChoose : ODDLayoutObject {
    ODDOtherwise * mOtherwise;
    NSMutableArray * mWhens;
}

- (void).cxx_destruct;
- (void)addWhen:(id)arg1;
- (id)description;
- (id)init;
- (id)otherwise;
- (void)setOtherwise:(id)arg1;
- (id)whens;

@end
