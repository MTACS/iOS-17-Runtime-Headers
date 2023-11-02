
@interface _SBSystemApertureIndicatorContainerView : UIView <SAUILayoutObstructed, SBSystemApertureElementViewControllingContaining> {
    UIViewController<SAUIElementViewControlling> * _elementViewController;
    UIViewController<SAUIElementViewControlling> * _outgoingElementViewController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) UIViewController<SAUIElementViewControlling> *elementViewController;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSArray *layoutObstacles;
@property (nonatomic, readonly) UIViewController<SAUIElementViewControlling> *outgoingElementViewController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)elementViewController;
- (id)layoutObstacles;
- (id)outgoingElementViewController;
- (void)setElementViewController:(id)arg1;

@end
