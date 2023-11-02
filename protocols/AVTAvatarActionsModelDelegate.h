
@protocol AVTAvatarActionsModelDelegate <NSObject>

@required

- (void)performCreateForActionsModel:(AVTAvatarActionsProvider *)arg1;
- (void)performDeleteForActionsModel:(AVTAvatarActionsProvider *)arg1;
- (void)performDuplicateForActionsModel:(AVTAvatarActionsProvider *)arg1;
- (void)performEditForActionsModel:(AVTAvatarActionsProvider *)arg1;

@end
