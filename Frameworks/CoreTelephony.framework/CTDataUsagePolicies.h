
@interface CTDataUsagePolicies : NSObject <NSCopying, NSSecureCoding> {
    NSString * _bundleId;
    long long  _cellular;
    bool  _isManaged;
    bool  _isRestricted;
    long long  _wifi;
}

@property (nonatomic, retain) NSString *bundleId;
@property (nonatomic) long long cellular;
@property (nonatomic) bool isManaged;
@property (nonatomic) bool isRestricted;
@property (nonatomic) long long wifi;

// Image: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)bundleId;
- (long long)cellular;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init:(id)arg1 withCellularPolicy:(long long)arg2 andWifiPolicy:(long long)arg3;
- (id)init:(id)arg1 withCellularPolicy:(long long)arg2 wifiPolicy:(long long)arg3 isManaged:(bool)arg4 andIsRestricted:(bool)arg5;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isManaged;
- (bool)isRestricted;
- (void)setBundleId:(id)arg1;
- (void)setCellular:(long long)arg1;
- (void)setIsManaged:(bool)arg1;
- (void)setIsRestricted:(bool)arg1;
- (void)setWifi:(long long)arg1;
- (long long)wifi;

// Image: /System/Library/PrivateFrameworks/DigitalSeparation.framework/DigitalSeparation

+ (id)ds_DataUsagePolicyWithPolicy:(id)arg1 sourceName:(id)arg2;

@end
