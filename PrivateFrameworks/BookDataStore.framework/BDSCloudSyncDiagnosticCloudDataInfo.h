
@interface BDSCloudSyncDiagnosticCloudDataInfo : NSObject <NSCopying, NSSecureCoding> {
    NSString * _identifier;
    NSString * _saltedHashedID;
}

@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSString *saltedHashedID;
@property (nonatomic, readonly) NSDictionary *stateForLog;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 saltedHashedID:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)saltedHashedID;
- (void)setIdentifier:(id)arg1;
- (void)setSaltedHashedID:(id)arg1;
- (id)stateForLog;

@end
