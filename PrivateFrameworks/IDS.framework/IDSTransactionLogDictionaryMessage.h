
@interface IDSTransactionLogDictionaryMessage : IDSTransactionLogMessage {
    NSDictionary * _dictionaryValue;
}

@property (nonatomic, readonly) NSDictionary *dictionaryValue;

- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)dictionaryValue;
- (id)initWithDictionary:(id)arg1 accountUniqueID:(id)arg2 fromID:(id)arg3 loginID:(id)arg4 serviceName:(id)arg5;
- (id)initWithDictionaryRepresentation:(id)arg1;

@end
