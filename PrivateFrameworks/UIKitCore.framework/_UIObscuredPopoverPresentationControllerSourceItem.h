
@interface _UIObscuredPopoverPresentationControllerSourceItem : NSObject <UIPopoverPresentationControllerSourceItem, _UIPopoverPresentationControllerSourceItem_Internal> {
    <_UIPopoverPresentationControllerSourceItem_Internal> * _sourceItem;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)obscuredSourceItemForItem:(id)arg1;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_frameInCoordinateSpace:(id)arg1 window:(id)arg2;
- (id)_nearestViewController;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_sourceRectForPresentationInWindow:(id)arg1;
- (id)_sourceViewForPresentationInWindow:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameInView:(id)arg1;

@end
