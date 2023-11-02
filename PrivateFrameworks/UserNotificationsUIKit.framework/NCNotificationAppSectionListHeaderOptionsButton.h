
@interface NCNotificationAppSectionListHeaderOptionsButton : UIButton <PLContextMenuPresenter>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) UIBezierPath *visiblePathForPreview;

- (id)visiblePathForPreview;

@end
