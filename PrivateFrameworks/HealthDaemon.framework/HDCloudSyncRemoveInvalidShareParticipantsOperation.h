
@interface HDCloudSyncRemoveInvalidShareParticipantsOperation : HDCloudSyncOperation <HDSynchronousTaskGroupDelegate> {
    NSArray * _participantsToCheck;
    long long  _requiredPermission;
    HDSynchronousTaskGroup * _taskGroup;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *participantsToCheck;
@property (nonatomic) long long requiredPermission;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithConfiguration:(id)arg1 cloudState:(id)arg2;
- (void)main;
- (id)participantsToCheck;
- (long long)requiredPermission;
- (void)setParticipantsToCheck:(id)arg1;
- (void)setRequiredPermission:(long long)arg1;
- (void)synchronousTaskGroup:(id)arg1 didFinishWithSuccess:(bool)arg2 errors:(id)arg3;

@end
