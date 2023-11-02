
@interface CNiOSABContactBuffersDecoder : NSObject {
    NSMutableArray * _contactsWaitingForUnification;
    unsigned long long  _decodeBatchSize;
    CNContactBufferDecoder * _decoder;
    NSMutableDictionary * _matchInfosWaitingForUnification;
    bool  _mutableResults;
    bool  _unifyResults;
}

@property (nonatomic, readonly) NSMutableArray *contactsWaitingForUnification;
@property (nonatomic, readonly) unsigned long long decodeBatchSize;
@property (nonatomic, readonly) CNContactBufferDecoder *decoder;
@property (nonatomic, readonly) NSMutableDictionary *matchInfosWaitingForUnification;
@property (nonatomic, readonly) bool mutableResults;
@property (nonatomic, readonly) bool unifyResults;

- (void).cxx_destruct;
- (void)_addContactMatchInfoFromABMatchInfos:(id)arg1 forContact:(id)arg2 toDictionary:(id)arg3;
- (id)_contactMatchInfosFromABMatchInfos:(id)arg1 contacts:(id)arg2;
- (id)contactMatchInfosFromABMatchInfos:(id)arg1 contacts:(id)arg2;
- (id)contactsWaitingForUnification;
- (unsigned long long)decodeBatchSize;
- (bool)decodeContactsFromData:(id)arg1 moreComing:(bool)arg2 replyHandler:(id /* block */)arg3 error:(id*)arg4;
- (id)decoder;
- (id)init;
- (id)initWithDecoder:(id)arg1 unifyResults:(bool)arg2 mutableResults:(bool)arg3 decodeBatchLimit:(unsigned long long)arg4;
- (id)initWithFetchRequest:(id)arg1;
- (id)matchInfosWaitingForUnification;
- (bool)mutableResults;
- (id)unifyContacts:(id)arg1 moreComing:(bool)arg2;
- (bool)unifyResults;

@end
