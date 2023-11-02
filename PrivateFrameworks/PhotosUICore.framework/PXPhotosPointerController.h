
@interface PXPhotosPointerController : NSObject <PXSettingsKeyObserver, UIPointerInteractionDelegate> {
    UIView * _contentView;
    <PXPhotosPointerControllerDelegate> * _delegate;
    UIPointerInteraction * _pointerInteraction;
}

@property (nonatomic, readonly) UIView *contentView;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) <PXPhotosPointerControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UIPointerInteraction *pointerInteraction;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_setupWithContentView:(id)arg1;
- (id)contentView;
- (id)delegate;
- (id)initWithContentView:(id)arg1 delegate:(id)arg2;
- (void)invalidate;
- (id)pointerInteraction;
- (id)pointerInteraction:(id)arg1 regionForRequest:(id)arg2 defaultRegion:(id)arg3;
- (id)pointerInteraction:(id)arg1 styleForRegion:(id)arg2;
- (void)pointerInteraction:(id)arg1 willEnterRegion:(id)arg2 animator:(id)arg3;
- (void)pointerInteraction:(id)arg1 willExitRegion:(id)arg2 animator:(id)arg3;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;

@end
