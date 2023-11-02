
@interface VKCTextPointerTrackingView : UIView <UIPointerInteractionDelegate> {
    VKQuad * _quad;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) VKQuad *quad;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithQuad:(id)arg1;
- (id)pointerInteraction:(id)arg1 styleForRegion:(id)arg2;
- (void)pointerInteraction:(id)arg1 willExitRegion:(id)arg2 animator:(id)arg3;
- (id)quad;

@end
