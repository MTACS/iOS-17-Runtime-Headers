
@interface SidecarDevice : NSObject <NSSecureCoding> {
    NSDictionary * _cameraCapabilities;
    unsigned long long  _cameraState;
    UTType * _deviceType;
    unsigned long long  _generation;
    NSUUID * _identifier;
    NSString * _model;
    NSString * _name;
    bool  _offersAdditionalDisplay;
    long long  _rapportVersion;
    unsigned long long  _status;
    NSString * _version;
}

@property (nonatomic, copy) NSDictionary *cameraCapabilities;
@property (nonatomic) unsigned long long cameraState;
@property (nonatomic, readonly) UTType *deviceType;
@property (nonatomic, readonly) NSString *deviceTypeIdentifier;
@property (nonatomic, readonly) bool hasHomeButton;
@property (nonatomic, readonly) NSUUID *identifier;
@property (nonatomic, readonly) NSURL *imageURL;
@property (nonatomic, readonly) NSString *localizedDeviceType;
@property (nonatomic, readonly) NSString *model;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic) bool offersAdditionalDisplay;
@property (nonatomic, readonly) long long rapportVersion;
@property (nonatomic) unsigned long long status;
@property (nonatomic, readonly) NSString *version;

+ (id)allDevices;
+ (id)imageURLForDeviceTypeIdentifier:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_updateFromDevice:(id)arg1 generation:(unsigned long long)arg2;
- (id)cameraCapabilities;
- (unsigned long long)cameraState;
- (id)description;
- (id)deviceType;
- (id)deviceTypeIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasHomeButton;
- (unsigned long long)hash;
- (id)identifier;
- (id)imageURL;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 model:(id)arg2 name:(id)arg3;
- (id)initWithIdentifier:(id)arg1 model:(id)arg2 name:(id)arg3 version:(id)arg4;
- (bool)isEqual:(id)arg1;
- (id)localizedDeviceType;
- (id)model;
- (id)name;
- (bool)offersAdditionalDisplay;
- (long long)rapportVersion;
- (void)setCameraCapabilities:(id)arg1;
- (void)setCameraState:(unsigned long long)arg1;
- (void)setOffersAdditionalDisplay:(bool)arg1;
- (void)setStatus:(unsigned long long)arg1;
- (unsigned long long)status;
- (id)version;

@end
