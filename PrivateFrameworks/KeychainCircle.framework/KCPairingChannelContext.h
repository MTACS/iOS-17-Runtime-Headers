
@interface KCPairingChannelContext : NSObject <NSSecureCoding> {
    NSString * _altDSID;
    NSString * _intent;
    NSString * _model;
    NSString * _modelClass;
    NSString * _modelVersion;
    NSString * _osVersion;
    NSString * _uniqueClientID;
    NSString * _uniqueDeviceID;
}

@property (retain) NSString *altDSID;
@property (retain) NSString *intent;
@property (retain) NSString *model;
@property (retain) NSString *modelClass;
@property (retain) NSString *modelVersion;
@property (retain) NSString *osVersion;
@property (retain) NSString *uniqueClientID;
@property (retain) NSString *uniqueDeviceID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)altDSID;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)intent;
- (bool)isEqual:(id)arg1;
- (id)model;
- (id)modelClass;
- (id)modelVersion;
- (id)osVersion;
- (void)setAltDSID:(id)arg1;
- (void)setIntent:(id)arg1;
- (void)setModel:(id)arg1;
- (void)setModelClass:(id)arg1;
- (void)setModelVersion:(id)arg1;
- (void)setOsVersion:(id)arg1;
- (void)setUniqueClientID:(id)arg1;
- (void)setUniqueDeviceID:(id)arg1;
- (id)uniqueClientID;
- (id)uniqueDeviceID;

@end
