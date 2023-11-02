
@interface SFBlockBasedPopoverSourceInfo : NSObject <_SFPopoverSourceInfo> {
    id /* block */  _sourceInfoProvider;
}

@property (nonatomic, readonly) UIBarButtonItem *barButtonItem;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long permittedArrowDirections;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } popoverSourceRect;
@property (nonatomic, readonly) UIView *popoverSourceView;
@property (nonatomic) long long provenance;
@property (nonatomic, readonly) bool shouldDismissIfSourceRemovedAfterRepositioning;
@property (nonatomic) bool shouldHideArrow;
@property (nonatomic) bool shouldPassthroughSuperview;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)barButtonItem;
- (id)initWithSourceInfoProvider:(id /* block */)arg1;
- (unsigned long long)permittedArrowDirections;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })popoverSourceRect;
- (id)popoverSourceView;
- (long long)provenance;
- (bool)shouldHideArrow;
- (bool)shouldPassthroughSuperview;

@end
