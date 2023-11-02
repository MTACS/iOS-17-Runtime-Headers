
@interface HDCloudSyncValidateSubscriptionsOperation : HDCloudSyncOperation {
    bool  _includeSecondaryContainers;
}

@property (nonatomic) bool includeSecondaryContainers;

+ (bool)shouldLogAtOperationStart;

- (bool)includeSecondaryContainers;
- (void)main;
- (void)setIncludeSecondaryContainers:(bool)arg1;

@end
