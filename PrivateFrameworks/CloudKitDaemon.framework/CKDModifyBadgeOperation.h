
@interface CKDModifyBadgeOperation : CKDOperation {
    unsigned long long  _badgeValue;
}

@property (nonatomic, readonly) unsigned long long badgeValue;

+ (long long)isPredominatelyDownload;

- (id)activityCreate;
- (unsigned long long)badgeValue;
- (id)initWithOperationInfo:(id)arg1 container:(id)arg2;
- (void)main;
- (int)operationType;

@end
