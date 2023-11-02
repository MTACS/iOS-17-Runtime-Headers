
@interface ICASDeviceSnapshotItemData : NSObject <AADataEventType> {
    NSNumber * _bioAuthEnabled;
    NSString * _deviceID;
    NSString * _deviceModel;
    NSString * _devicePlatform;
    NSNumber * _localNotesEnabled;
    NSString * _osVersion;
}

@property (nonatomic, readonly) NSNumber *bioAuthEnabled;
@property (nonatomic, readonly) NSString *deviceID;
@property (nonatomic, readonly) NSString *deviceModel;
@property (nonatomic, readonly) NSString *devicePlatform;
@property (nonatomic, readonly) NSNumber *localNotesEnabled;
@property (nonatomic, readonly) NSString *osVersion;

+ (id)dataName;

- (void).cxx_destruct;
- (id)bioAuthEnabled;
- (id)deviceID;
- (id)deviceModel;
- (id)devicePlatform;
- (id)initWithDeviceModel:(id)arg1 devicePlatform:(id)arg2 bioAuthEnabled:(id)arg3 localNotesEnabled:(id)arg4 osVersion:(id)arg5 deviceID:(id)arg6;
- (id)localNotesEnabled;
- (id)osVersion;
- (id)toDict;

@end
