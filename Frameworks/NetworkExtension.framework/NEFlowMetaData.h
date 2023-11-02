
@interface NEFlowMetaData : NSObject <NSCopying, NSSecureCoding> {
    bool  _fastOpenRequested;
    NSUUID * _filterFlowIdentifier;
    bool  _multipathRequested;
    NSData * _sourceAppAuditToken;
    NSString * _sourceAppSigningIdentifier;
    NSData * _sourceAppUniqueIdentifier;
}

@property (readonly) bool fastOpenRequested;
@property (readonly) NSUUID *filterFlowIdentifier;
@property (readonly) bool multipathRequested;
@property (readonly) NSData *sourceAppAuditToken;
@property (readonly) NSString *sourceAppSigningIdentifier;
@property (readonly) NSData *sourceAppUniqueIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (bool)fastOpenRequested;
- (id)filterFlowIdentifier;
- (id)initWithCoder:(id)arg1;
- (bool)multipathRequested;
- (id)sourceAppAuditToken;
- (id)sourceAppSigningIdentifier;
- (id)sourceAppUniqueIdentifier;

@end
