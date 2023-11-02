
@interface SLShareableContentRepresentation : NSObject <BSXPCSecureCoding, NSSecureCoding> {
    long long  _preferredRepresentation;
    NSString * _typeIdentifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long preferredRepresentation;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *typeIdentifier;

+ (bool)supportsBSXPCSecureCoding;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithBSXPCCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTypeIdentifier:(id)arg1 preferredRepresentation:(long long)arg2;
- (long long)preferredRepresentation;
- (id)typeIdentifier;

@end
