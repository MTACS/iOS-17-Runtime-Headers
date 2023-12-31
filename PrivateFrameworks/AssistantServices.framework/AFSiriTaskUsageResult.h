
@interface AFSiriTaskUsageResult : NSObject <NSSecureCoding> {
    NSString * _originatingAceID;
}

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithOriginatingAceID:(id)arg1;
- (id)_originatingAceID;
- (id)_resultDescription;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
