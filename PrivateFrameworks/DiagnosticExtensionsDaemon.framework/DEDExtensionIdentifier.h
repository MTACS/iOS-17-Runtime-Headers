
@interface DEDExtensionIdentifier : NSObject <DEDSecureArchiving, NSSecureCoding> {
    NSString * _extensionIdentifier;
    long long  _invocationNumber;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) NSString *extensionIdentifier;
@property (readonly) unsigned long long hash;
@property long long invocationNumber;
@property (readonly) NSString *stringValue;
@property (readonly) Class superclass;

+ (id)archivedClasses;
+ (id)log;
+ (id)parseDEDIdentifierString:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)extensionIdentifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithExtensionIdentifier:(id)arg1 invocationNumber:(long long)arg2;
- (id)initWithString:(id)arg1;
- (long long)invocationNumber;
- (bool)isEqual:(id)arg1;
- (void)setExtensionIdentifier:(id)arg1;
- (void)setInvocationNumber:(long long)arg1;
- (id)stringValue;

@end
