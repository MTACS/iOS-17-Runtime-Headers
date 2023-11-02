
@interface ICQDriveAppInfo : NSObject <NSCopying, NSSecureCoding> {
    NSArray * _bundleIds;
    NSString * _containerID;
    bool  _excludeOnClient;
    NSString * _label;
}

@property (nonatomic, retain) NSArray *bundleIds;
@property (nonatomic, copy) NSString *containerID;
@property (nonatomic) bool excludeOnClient;
@property (nonatomic, copy) NSString *label;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)bundleIds;
- (id)containerID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (bool)excludeOnClient;
- (id)initFromDictionary:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)label;
- (void)setBundleIds:(id)arg1;
- (void)setContainerID:(id)arg1;
- (void)setExcludeOnClient:(bool)arg1;
- (void)setLabel:(id)arg1;

@end
