
@interface HDCloudSyncHandleMissingManateeIdentityOperation : HDCloudSyncOperation <HDSynchronousTaskGroupDelegate> {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    HDSynchronousTaskGroup * _taskGroup;
    NSArray * _zoneIdentifiersWithIdentityLost;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy) NSArray *zoneIdentifiersWithIdentityLost;

+ (bool)shouldLogAtOperationStart;

- (void).cxx_destruct;
- (id)initWithConfiguration:(id)arg1 cloudState:(id)arg2;
- (void)main;
- (void)setZoneIdentifiersWithIdentityLost:(id)arg1;
- (void)synchronousTaskGroup:(id)arg1 didFinishWithSuccess:(bool)arg2 errors:(id)arg3;
- (id)zoneIdentifiersWithIdentityLost;

@end
