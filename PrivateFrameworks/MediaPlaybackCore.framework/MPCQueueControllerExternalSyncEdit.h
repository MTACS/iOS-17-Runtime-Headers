
@interface MPCQueueControllerExternalSyncEdit : MPCQueueControllerEdit {
    NSString * _targetContentItemID;
}

@property (nonatomic, readonly) bool allowsChangingCurrentItem;
@property (nonatomic, readonly, copy) NSString *targetContentItemID;

- (void).cxx_destruct;
- (void)setTargetContentItemID:(id)arg1;
- (id)targetContentItemID;

@end
