
@protocol EDSenderBucketChangeHookResponder <NSObject>

@optional

- (void)persistenceDidAddAddresses:(NSArray *)arg1 toSender:(EMSender *)arg2 generation:(long long)arg3;
- (void)persistenceDidChangeSenders:(NSArray *)arg1 generation:(long long)arg2;
- (void)persistenceDidRemoveAddresses:(NSArray *)arg1 fromSender:(EMSender *)arg2 generation:(long long)arg3;
- (void)persistenceWillAddAddresses:(NSArray *)arg1 toSender:(EMSender *)arg2;
- (void)persistenceWillChangeSenders:(NSArray *)arg1;
- (void)persistenceWillChangeSendersForAddresses:(NSArray *)arg1;
- (void)persistenceWillRemoveAddresses:(NSArray *)arg1 fromSender:(EMSender *)arg2;

@end
