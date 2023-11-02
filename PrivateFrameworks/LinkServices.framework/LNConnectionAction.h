
@interface LNConnectionAction : NSObject <BSXPCSecureCoding, NSSecureCoding> {
    NSUUID * _identifier;
    long long  _metadataVersion;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSUUID *identifier;
@property (nonatomic, readonly) long long metadataVersion;
@property (readonly) Class superclass;

+ (bool)supportsBSXPCSecureCoding;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)initWithBSXPCCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 metadataVersion:(long long)arg2;
- (long long)metadataVersion;

@end
