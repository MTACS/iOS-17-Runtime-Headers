
@interface ICASSyncHealthPrivateDeviceData : NSObject <AADataEventType> {
    NSString * _syncHealthPrivateDeviceID;
}

@property (nonatomic, readonly) NSString *syncHealthPrivateDeviceID;

+ (id)dataName;

- (void).cxx_destruct;
- (id)initWithSyncHealthPrivateDeviceID:(id)arg1;
- (id)syncHealthPrivateDeviceID;
- (id)toDict;

@end
