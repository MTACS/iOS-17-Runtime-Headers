
@protocol AVTAvatarActionsController <NSObject>

@required

- (AVTAvatarActionsProvider *)actionsModel;
- (AVTAvatarRecordDataSource *)dataSource;
- (<AVTAvatarActionsControllerDelegate> *)delegate;
- (void)setDelegate:(id <AVTAvatarActionsControllerDelegate>)arg1;
- (void)updateForChangedContentCategorySize;
- (void)updateWithActionsModel:(AVTAvatarActionsProvider *)arg1;

@end
