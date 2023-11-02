
@interface AFHomeAccessorySiriDataSharingChangeLogEvent : NSObject <AFDictionaryConvertible, NSCopying, NSSecureCoding> {
    NSString * _buildVersion;
    NSString * _changeReason;
    long long  _changeSource;
    NSDate * _date;
    NSString * _logEventIdentifier;
    long long  _newOptInStatus;
    long long  _previousOptInStatus;
    NSString * _productVersion;
    NSString * _schemaVersion;
}

@property (nonatomic, readonly, copy) NSString *buildVersion;
@property (nonatomic, readonly, copy) NSString *changeReason;
@property (nonatomic, readonly) long long changeSource;
@property (nonatomic, readonly, copy) NSDate *date;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *logEventIdentifier;
@property (nonatomic, readonly) long long newOptInStatus;
@property (nonatomic, readonly) long long previousOptInStatus;
@property (nonatomic, readonly, copy) NSString *productVersion;
@property (nonatomic, readonly, copy) NSString *schemaVersion;
@property (readonly) Class superclass;

+ (id)newWithBuilder:(id /* block */)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_descriptionWithIndent:(unsigned long long)arg1;
- (id)buildDictionaryRepresentation;
- (id)buildVersion;
- (id)changeReason;
- (long long)changeSource;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)date;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithBuilder:(id /* block */)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDate:(id)arg1 previousOptInStatus:(long long)arg2 newOptInStatus:(long long)arg3 changeSource:(long long)arg4 changeReason:(id)arg5 buildVersion:(id)arg6 productVersion:(id)arg7 schemaVersion:(id)arg8 logEventIdentifier:(id)arg9;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)logEventIdentifier;
- (id)mutatedCopyWithMutator:(id /* block */)arg1;
- (long long)newOptInStatus;
- (long long)previousOptInStatus;
- (id)productVersion;
- (id)schemaVersion;

@end
