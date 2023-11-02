
@interface NACProxyVolumeControlTarget : NSObject <NSCopying, NSSecureCoding> {
    NSString * _category;
    NSNumber * _originIdentifier;
}

@property (nonatomic, retain) NSString *category;
@property (nonatomic, retain) NSNumber *originIdentifier;
@property (getter=isPairedDevice, nonatomic, readonly) bool pairedDevice;

+ (bool)_isValidOriginIdentifier:(id)arg1;
+ (bool)supportsSecureCoding;
+ (id)volumeControlTargetWithCategory:(id)arg1;
+ (id)volumeControlTargetWithOriginIdentifier:(id)arg1;

- (void).cxx_destruct;
- (id)category;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithOriginIdentifier:(id)arg1 category:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isPairedDevice;
- (id)originIdentifier;
- (void)setCategory:(id)arg1;
- (void)setOriginIdentifier:(id)arg1;

@end
