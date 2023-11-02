
@interface HMDSnapshotFile : HMFObject <HMFLogging> {
    NSNumber * _aspectRatio;
    NSString * _directory;
    bool  _externalFilePath;
    NSString * _filePath;
    bool  _filled;
    NSNumber * _slotIdentifier;
    NSDate * _snapshotTimestamp;
}

@property (readonly) NSNumber *aspectRatio;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSString *directory;
@property (readonly) NSData *encodedDataForIDSSend;
@property (readonly) bool externalFilePath;
@property (readonly) NSString *filePath;
@property (getter=isFilled) bool filled;
@property (readonly) unsigned long long hash;
@property (copy) NSNumber *slotIdentifier;
@property (readonly) NSDate *snapshotTimestamp;
@property (readonly) Class superclass;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)aspectRatio;
- (id)attributeDescriptions;
- (void)clearSlot;
- (id)copyFileAtPath:(id)arg1 snapshotTimestamp:(id)arg2;
- (void)dealloc;
- (bool)decodeIDSDataReceived:(id)arg1 snapshotDataTransaction:(id)arg2;
- (id)directory;
- (id)encodedDataForIDSSend;
- (bool)externalFilePath;
- (id)filePath;
- (void)fillSlot;
- (unsigned long long)hash;
- (id)initWithImageDirectory:(id)arg1;
- (id)initWithImageDirectory:(id)arg1 externalFilePath:(id)arg2 snapshotTimestamp:(id)arg3;
- (id)initWithImageDirectory:(id)arg1 filePath:(id)arg2 snapshotTimestamp:(id)arg3;
- (id)initWithImageDirectory:(id)arg1 snapshotData:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isFilled;
- (id)logIdentifier;
- (bool)prepareParametersWithFilePath:(id)arg1 snapshotData:(id)arg2 directory:(id)arg3 snapshotTimestamp:(id)arg4 resize:(bool)arg5 writeBack:(bool)arg6;
- (void)setFilled:(bool)arg1;
- (void)setSlotIdentifier:(id)arg1;
- (id)slotIdentifier;
- (id)snapshotTimestamp;
- (void)updateSlotIdentifier;

@end
