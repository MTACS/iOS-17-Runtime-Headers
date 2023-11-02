
@interface FBSSceneIdentityToken : NSObject <BSXPCCoding, BSXPCSecureCoding, NSCopying, NSSecureCoding> {
    BSServiceConnectionEndpoint * _endpoint;
    NSString * _identifier;
    NSString * _stringRepresentation;
    NSString * _workspace;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) BSServiceConnectionEndpoint *endpoint;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly, copy) NSString *stringRepresentation;
@property (readonly) Class superclass;

+ (bool)supportsBSXPCSecureCoding;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)description;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)endpoint;
- (unsigned long long)hash;
- (id)identifier;
- (id)init;
- (id)initWithBSXPCCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 workspace:(id)arg2 endpoint:(id)arg3;
- (id)initWithXPCDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)stringRepresentation;

@end
