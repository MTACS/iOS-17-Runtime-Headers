
@interface EMMessageObjectID : EMObjectID {
    EMMessageCollectionItemID * _collectionItemID;
    EMMailboxScope * _mailboxScope;
}

@property (nonatomic, readonly) EMMessageCollectionItemID *collectionItemID;
@property (nonatomic, readonly) long long globalMessageID;
@property (nonatomic, readonly) EMMailboxScope *mailboxScope;

+ (id)new;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)collectionItemID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (long long)globalMessageID;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithCollectionItemID:(id)arg1 mailboxScope:(id)arg2;
- (id)initWithCollectionItemID:(id)arg1 predicate:(id)arg2 mailboxTypeResolver:(id)arg3;
- (id)initWithGlobalMessageID:(long long)arg1 mailboxScope:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)mailboxScope;

@end
