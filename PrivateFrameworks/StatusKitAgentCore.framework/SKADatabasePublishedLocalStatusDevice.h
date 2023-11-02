
@interface SKADatabasePublishedLocalStatusDevice : NSObject {
    NSArray * _deliveredStatuses;
    NSString * _idsIdentifier;
    NSArray * _pendingStatuses;
}

@property (nonatomic, retain) NSArray *deliveredStatuses;
@property (nonatomic, retain) NSString *idsIdentifier;
@property (nonatomic, retain) NSArray *pendingStatuses;

- (void).cxx_destruct;
- (id)deliveredStatuses;
- (id)idsIdentifier;
- (id)initWithCoreDataPulishedLocalStatusDevice:(id)arg1;
- (id)initWithIDSIdentifier:(id)arg1 pendingStatuses:(id)arg2 deliveredStatuses:(id)arg3;
- (id)pendingStatuses;
- (void)setDeliveredStatuses:(id)arg1;
- (void)setIdsIdentifier:(id)arg1;
- (void)setPendingStatuses:(id)arg1;

@end
