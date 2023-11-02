
@interface _HMDDeviceHandle : HMFObject <NSCopying, NSSecureCoding> {
    NSUUID * _identifier;
}

@property (nonatomic, readonly, copy) HMDAccountHandle *accountHandle;
@property (nonatomic, readonly, copy) NSString *destination;
@property (getter=isGlobal, nonatomic, readonly) bool global;
@property (nonatomic, readonly) NSUUID *identifier;
@property (getter=isLocal, nonatomic, readonly) bool local;

+ (id)identifierNamespace;
+ (bool)isValidDestination:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)accountHandle;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)destination;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDestination:(id)arg1;
- (id)initWithIdentifier:(id)arg1;
- (bool)isGlobal;
- (bool)isLocal;

@end
