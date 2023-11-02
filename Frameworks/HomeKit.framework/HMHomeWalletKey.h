
@interface HMHomeWalletKey : NSObject <HMFObject, NSCopying, NSSecureCoding> {
    NSUUID * _UUID;
    long long  _color;
    NSURL * _customURL;
    bool  _expressEnabled;
}

@property (readonly, copy) NSUUID *UUID;
@property (nonatomic, readonly, copy) NSArray *attributeDescriptions;
@property (readonly) long long color;
@property (readonly, copy) NSURL *customURL;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isExpressEnabled, readonly) bool expressEnabled;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy) NSString *shortDescription;
@property (readonly) Class superclass;

+ (id)shortDescription;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)UUID;
- (id)attributeDescriptions;
- (long long)color;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)customURL;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithUUID:(id)arg1 customURL:(id)arg2 expressEnabled:(bool)arg3 color:(long long)arg4;
- (bool)isEqual:(id)arg1;
- (bool)isExpressEnabled;
- (id)privateDescription;
- (id)shortDescription;

@end
