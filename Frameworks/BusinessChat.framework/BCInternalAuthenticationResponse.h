
@interface BCInternalAuthenticationResponse : NSObject <BCDictionarySerializable> {
    NSString * _businessIdentifier;
    NSString * _credentials;
    NSArray * _errors;
    NSString * _groupIdentifier;
    NSString * _status;
}

@property (nonatomic, readonly) NSString *businessIdentifier;
@property (nonatomic, readonly) NSString *credentials;
@property (nonatomic, readonly) NSDictionary *dictionaryValue;
@property (nonatomic, readonly) BCError *error;
@property (nonatomic, readonly) NSArray *errors;
@property (nonatomic, readonly) NSString *groupIdentifier;
@property (nonatomic, readonly) NSString *status;

- (void).cxx_destruct;
- (id)businessIdentifier;
- (id)credentials;
- (id)dictionaryValue;
- (id)error;
- (id)errors;
- (id)groupIdentifier;
- (id)initWithBusinessIdentifier:(id)arg1 groupIdentifier:(id)arg2 credentials:(id)arg3 error:(id)arg4;
- (id)initWithDictionary:(id)arg1;
- (id)responseMessageFor:(id)arg1 message:(id)arg2;
- (id)status;

@end
