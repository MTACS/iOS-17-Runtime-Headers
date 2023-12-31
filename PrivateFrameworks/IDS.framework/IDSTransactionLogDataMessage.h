
@interface IDSTransactionLogDataMessage : IDSTransactionLogMessage {
    NSData * _dataValue;
}

@property (nonatomic, readonly) NSData *dataValue;

- (void).cxx_destruct;
- (id)dataValue;
- (id)dictionaryRepresentation;
- (id)initWithData:(id)arg1 accountUniqueID:(id)arg2 fromID:(id)arg3 loginID:(id)arg4 serviceName:(id)arg5;
- (id)initWithDictionaryRepresentation:(id)arg1;

@end
