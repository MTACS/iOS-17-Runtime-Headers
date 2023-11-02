
@interface CATInitializingIDSServiceConnectionContentAccept : NSObject <CATInitializingIDSServiceConnectionMessageContent> {
    NSUUID * _connectionIdentifier;
}

@property (nonatomic, readonly) NSUUID *connectionIdentifier;
@property (nonatomic, readonly) long long contentType;
@property (nonatomic, readonly, copy) NSDictionary *dictionaryValue;

+ (id)instanceWithDictionary:(id)arg1;

- (void).cxx_destruct;
- (id)connectionIdentifier;
- (long long)contentType;
- (id)dictionaryValue;
- (id)initWithConnectionIdentifier:(id)arg1;

@end
