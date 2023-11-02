
@interface CKDContainerSpecificInfoOperation : CKDOperation {
    CKDContainerServerInfo * _containerServerInfo;
    NSObject<OS_dispatch_group> * _infoFetchedGroup;
    bool  _requireUserIDs;
}

@property (nonatomic, copy) CKDContainerServerInfo *containerServerInfo;
@property (nonatomic, readonly) NSObject<OS_dispatch_group> *infoFetchedGroup;
@property (nonatomic) bool requireUserIDs;

- (void).cxx_destruct;
- (id)activityCreate;
- (id)containerServerInfo;
- (id)infoFetchedGroup;
- (id)initWithOperationInfo:(id)arg1 container:(id)arg2;
- (void)main;
- (bool)requireUserIDs;
- (void)setCompletionBlock:(id /* block */)arg1;
- (void)setContainerServerInfo:(id)arg1;
- (void)setRequireUserIDs:(bool)arg1;
- (bool)shouldCheckAppVersion;

@end
