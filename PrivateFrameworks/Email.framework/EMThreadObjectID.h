
@interface EMThreadObjectID : EMObjectID <EFPubliclyDescribable> {
    <EMCollectionItemID> * _collectionItemID;
    EMThreadScope * _threadScope;
}

@property (nonatomic, readonly) <EMCollectionItemID> *collectionItemID;
@property (nonatomic, readonly) long long conversationID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *ef_publicDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) EMThreadScope *threadScope;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_threadCollectionItemID;
- (id)collectionItemID;
- (long long)conversationID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)description;
- (id)ef_publicDescription;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithCollectionItemID:(id)arg1 threadScope:(id)arg2;
- (id)initWithConversationID:(long long)arg1 threadScope:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)threadScope;

@end
