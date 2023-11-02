
@interface _EDLazyWrappedMessage : _EDWrappedMessage {
    EDMessagePersistence * _messagePersistence;
}

@property (nonatomic, readonly) EDMessagePersistence *messagePersistence;

- (void).cxx_destruct;
- (long long)databaseID;
- (id)initWithMessage:(id)arg1 messagePersistence:(id)arg2;
- (id)messagePersistence;

@end
