
@interface AFSiriRequest : NSObject <NSSecureCoding> {
    NSString * __refId;
    NSUUID * _identifier;
    NSString * _originatingAceID;
    NSUUID * _turnId;
}

@property (setter=_setOriginatingAceID:, nonatomic, copy) NSString *_originatingAceID;
@property (setter=_setRefId:, nonatomic, copy) NSString *_refId;
@property (setter=_setTurnId:, nonatomic, copy) NSUUID *_turnId;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_af_analyticsContextDescription;
- (id)_descriptionWithProperties:(id)arg1;
- (id)_identifier;
- (id)_initWithOriginatingAceID:(id)arg1;
- (id)_initWithOriginatingAceID:(id)arg1 identifier:(id)arg2 turnId:(id)arg3;
- (bool)_makeAppFrontmost;
- (id)_originatingAceID;
- (id)_refId;
- (void)_setOriginatingAceID:(id)arg1;
- (void)_setRefId:(id)arg1;
- (void)_setTurnId:(id)arg1;
- (id)_turnId;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)requestName;

@end
