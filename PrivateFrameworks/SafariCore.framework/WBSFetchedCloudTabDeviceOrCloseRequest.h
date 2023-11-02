
@interface WBSFetchedCloudTabDeviceOrCloseRequest : NSObject <NSSecureCoding> {
    NSDictionary * _deviceOrCloseRequestDictionary;
    NSString * _uuidString;
}

@property (nonatomic, readonly, copy) NSDictionary *deviceOrCloseRequestDictionary;
@property (nonatomic, readonly, copy) NSString *uuidString;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)deviceOrCloseRequestDictionary;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithUUIDString:(id)arg1 deviceOrCloseRequestDictionary:(id)arg2;
- (id)uuidString;

@end
