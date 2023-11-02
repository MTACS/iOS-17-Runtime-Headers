
@interface MRRapportTransportConfiguration : NSObject <NSSecureCoding> {
    NSString * _deviceUID;
    NSString * _name;
    NSString * _sessionUID;
}

@property (nonatomic, retain) NSString *deviceUID;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) NSString *sessionUID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (id)deviceUID;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)name;
- (id)sessionUID;
- (void)setDeviceUID:(id)arg1;
- (void)setName:(id)arg1;
- (void)setSessionUID:(id)arg1;

@end
