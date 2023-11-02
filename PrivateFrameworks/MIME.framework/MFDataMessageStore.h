
@interface MFDataMessageStore : MFMessageStore {
    NSData * _data;
    id  _mailboxUid;
    Class  _messageClass;
    NSString * _storagePath;
}

@property (nonatomic, retain) id mailboxUid;

- (void).cxx_destruct;
- (id)_cachedBodyDataForMessage:(id)arg1 valueIfNotPresent:(id)arg2;
- (id)_cachedBodyForMessage:(id)arg1 valueIfNotPresent:(id)arg2;
- (id)_cachedHeadersForMessage:(id)arg1 valueIfNotPresent:(id)arg2;
- (id)account;
- (id)bodyDataForMessage:(id)arg1 isComplete:(bool*)arg2 isPartial:(bool*)arg3 downloadIfNecessary:(bool)arg4;
- (bool)bodyFetchRequiresNetworkActivity;
- (id)headerDataForMessage:(id)arg1 downloadIfNecessary:(bool)arg2;
- (id)initWithData:(id)arg1;
- (id)mailboxUid;
- (id)message;
- (bool)messageCanBeTriaged:(id)arg1;
- (void)setMailboxUid:(id)arg1;
- (void)setMessageClass:(Class)arg1;
- (void)setStoragePath:(id)arg1;
- (id)storagePath;
- (id)storeData:(id)arg1 forMimePart:(id)arg2 isComplete:(bool)arg3;
- (id)storePath;

@end
