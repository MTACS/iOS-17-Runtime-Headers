
@interface AFInstanceInfo : NSObject <AFDictionaryConvertible, NSCopying, NSSecureCoding> {
    long long  _applicationType;
    NSUUID * _applicationUUID;
    NSUUID * _instanceUUID;
}

@property (nonatomic, readonly) long long applicationType;
@property (nonatomic, readonly, copy) NSUUID *applicationUUID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSUUID *instanceUUID;
@property (readonly) Class superclass;

+ (id)newWithBuilder:(id /* block */)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_descriptionWithIndent:(unsigned long long)arg1;
- (long long)applicationType;
- (id)applicationUUID;
- (id)buildDictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithBuilder:(id /* block */)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)initWithInstanceUUID:(id)arg1 applicationType:(long long)arg2 applicationUUID:(id)arg3;
- (id)instanceUUID;
- (bool)isEqual:(id)arg1;
- (id)mutatedCopyWithMutator:(id /* block */)arg1;

@end
