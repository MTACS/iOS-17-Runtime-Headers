
@interface ASCodableFriendList : PBCodable <NSCopying> {
    NSMutableArray * _friends;
}

@property (nonatomic, retain) NSMutableArray *friends;

+ (Class)friendType;

- (void).cxx_destruct;
- (void)addFriend:(id)arg1;
- (void)clearFriends;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)friendAtIndex:(unsigned long long)arg1;
- (id)friends;
- (unsigned long long)friendsCount;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setFriends:(id)arg1;
- (void)writeTo:(id)arg1;

@end
