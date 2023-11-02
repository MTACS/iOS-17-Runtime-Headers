
@interface FPTestingOperation : NSObject <NSCopying, NSFileProviderTestingOperation, NSSecureCoding> {
    NSString * _operationIdentifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) long long type;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)asChildrenEnumeration;
- (id)asCollisionResolution;
- (id)asContentFetch;
- (id)asCreation;
- (id)asDeletion;
- (id)asIngestion;
- (id)asLookup;
- (id)asModification;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithOperationIdentifier:(id)arg1;
- (bool)isEqual:(id)arg1;
- (long long)type;

@end
