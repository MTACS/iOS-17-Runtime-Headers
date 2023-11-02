
@interface ICASSnapshotHealthPrivateDeviceData : NSObject <AADataEventType> {
    NSString * _snapshotHealthPrivateDeviceID;
}

@property (nonatomic, readonly) NSString *snapshotHealthPrivateDeviceID;

+ (id)dataName;

- (void).cxx_destruct;
- (id)initWithSnapshotHealthPrivateDeviceID:(id)arg1;
- (id)snapshotHealthPrivateDeviceID;
- (id)toDict;

@end
