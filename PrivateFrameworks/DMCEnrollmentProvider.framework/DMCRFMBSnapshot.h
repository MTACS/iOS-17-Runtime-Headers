
@interface DMCRFMBSnapshot : NSObject <DMCRFSnapshot> {
    MBSnapshot * _snapshot;
}

@property (nonatomic, readonly, copy) NSDate *date;
@property (nonatomic, readonly, copy) NSDate *dateCreated;
@property (nonatomic, readonly, copy) NSDate *dateModified;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *deviceName;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) <DMCRFSnapshotIdentifier> *identifier;
@property (nonatomic, retain) MBSnapshot *snapshot;
@property (readonly) Class superclass;

+ (id)snapshotIdentifierFromSnapshot:(id)arg1;

- (void).cxx_destruct;
- (id)date;
- (id)dateCreated;
- (id)dateModified;
- (id)deviceName;
- (id)identifier;
- (id)initWithSnapshot:(id)arg1;
- (void)setSnapshot:(id)arg1;
- (id)snapshot;

@end
