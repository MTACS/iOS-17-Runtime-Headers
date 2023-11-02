
@interface MDMBackupManager : NSObject <MBManagerDelegate> {
    MBManager * _manager;
    NSString * _personaIdentifier;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, retain) MBManager *manager;
@property (nonatomic, readonly) NSString *personaIdentifier;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;

- (void).cxx_destruct;
- (id)init;
- (id)initWithPersonaIdentifier:(id)arg1;
- (void)isCloudBackupInProgressWithCompletion:(id /* block */)arg1;
- (id)manager;
- (id)personaIdentifier;
- (id)queue;
- (void)setManager:(id)arg1;
- (void)setQueue:(id)arg1;

@end
