
@interface BRCSharingCopyWebAuthTokenOperation : _BRCFrameworkOperation <BRCOperationSubclass> {
    NSString * _ckContainerID;
}

@property (nonatomic, retain) NSString *ckContainerID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)ckContainerID;
- (id)createActivity;
- (id)initWithSyncContext:(id)arg1 ckContainerID:(id)arg2;
- (void)main;
- (void)setCkContainerID:(id)arg1;
- (bool)shouldRetryForError:(id)arg1;

@end