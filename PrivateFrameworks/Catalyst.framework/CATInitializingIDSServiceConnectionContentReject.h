
@interface CATInitializingIDSServiceConnectionContentReject : NSObject <CATInitializingIDSServiceConnectionMessageContent> {
    NSUUID * _connectionIdentifier;
    NSError * _error;
}

@property (nonatomic, readonly) NSUUID *connectionIdentifier;
@property (nonatomic, readonly) long long contentType;
@property (nonatomic, readonly, copy) NSDictionary *dictionaryValue;
@property (nonatomic, retain) NSError *error;

+ (id)instanceWithDictionary:(id)arg1;

- (void).cxx_destruct;
- (id)connectionIdentifier;
- (long long)contentType;
- (id)dictionaryValue;
- (id)error;
- (id)initWithConnectionIdentifier:(id)arg1 error:(id)arg2;
- (void)setError:(id)arg1;

@end
