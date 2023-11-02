
@interface DMCRFMBSnapshotIdentifier : NSObject <DMCRFSnapshotIdentifier> {
    MBSnapshotIdentifier * _wrappedValue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) MBSnapshotIdentifier *wrappedValue;

- (void).cxx_destruct;
- (id)initWithMBSnapshotIdentifier:(id)arg1;
- (id)wrappedValue;

@end
