
@interface MFQuickReplyExpandButton : UIButton <UIPointerInteractionDelegate>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)buttonWithType:(long long)arg1;

- (id)_quickReplyExpandButtonPointerStyleInView:(id)arg1;
- (id)pointerInteraction:(id)arg1 regionForRequest:(id)arg2 defaultRegion:(id)arg3;
- (id)pointerInteraction:(id)arg1 styleForRegion:(id)arg2;

@end
