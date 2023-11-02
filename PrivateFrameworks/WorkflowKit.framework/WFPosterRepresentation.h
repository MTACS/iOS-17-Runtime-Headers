
@interface WFPosterRepresentation : NSObject <NSSecureCoding, WFNaming> {
    NSUUID * _UUID;
    NSString * _name;
    NSString * _providerBundleIdentifier;
}

@property (nonatomic, readonly) NSUUID *UUID;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly, copy) NSString *providerBundleIdentifier;
@property (nonatomic, readonly, copy) NSString *wfName;

+ (id)defaultPoster;
+ (id)posterWithSerializedRepresentation:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)UUID;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithUUID:(id)arg1 name:(id)arg2 providerBundleIdentifier:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)name;
- (id)providerBundleIdentifier;
- (id)serializedRepresentation;
- (id)wfName;

@end
