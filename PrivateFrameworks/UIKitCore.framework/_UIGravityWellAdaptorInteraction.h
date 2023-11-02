
@interface _UIGravityWellAdaptorInteraction : NSObject <UIInteraction> {
    UIView * _view;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UIView *view;

- (void).cxx_destruct;
- (void)didMoveToView:(id)arg1;
- (id)view;
- (void)willMoveToView:(id)arg1;

@end
