
@interface BRCSharingFetchUserRecordIDOperation : _BRCOperation <BRCOperationSubclass>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)createActivity;
- (id)initWithSyncContext:(id)arg1;
- (void)main;
- (bool)shouldRetryForError:(id)arg1;

@end
