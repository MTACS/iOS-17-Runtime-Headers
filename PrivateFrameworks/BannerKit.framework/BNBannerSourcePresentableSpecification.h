
@interface BNBannerSourcePresentableSpecification : BNPresentableIdentification <BNPresentableSpecifying> {
    long long  _contentBehavior;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _contentOutsets;
    struct CGSize { 
        double width; 
        double height; 
    }  _preferredContentSize;
    long long  _presentableBehavior;
}

@property (nonatomic) long long contentBehavior;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } contentOutsets;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct CGSize { double x1; double x2; } preferredContentSize;
@property (nonatomic) long long presentableBehavior;
@property (nonatomic, readonly, copy) NSString *requestIdentifier;
@property (nonatomic, readonly, copy) NSString *requesterIdentifier;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSUUID *uniqueIdentifier;
@property (nonatomic, readonly, copy) NSUUID *uniquePresentableIdentifier;

- (long long)contentBehavior;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentOutsets;
- (id)description;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (id)initWithBSXPCCoder:(id)arg1;
- (struct CGSize { double x1; double x2; })preferredContentSize;
- (long long)presentableBehavior;
- (void)setContentBehavior:(long long)arg1;
- (void)setContentOutsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setPreferredContentSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setPresentableBehavior:(long long)arg1;

@end
