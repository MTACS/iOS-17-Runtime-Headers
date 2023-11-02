
@interface SFUIBarButtonItemPopoverSourceInfo : NSObject <_SFPopoverSourceInfo> {
    UIBarButtonItem * _item;
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
- (id)description;
- (id)initWithItem:(id)arg1;

@end
