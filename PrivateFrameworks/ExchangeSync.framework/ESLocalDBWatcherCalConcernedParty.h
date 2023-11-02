
@interface ESLocalDBWatcherCalConcernedParty : NSObject <NSCopying> {
    NSString * _accountID;
    id  _concernedParty;
}

@property (nonatomic, readonly) NSString *accountID;
@property (nonatomic, readonly) id concernedParty;

- (void).cxx_destruct;
- (id)accountID;
- (id)concernedParty;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (id)initWithConcernedParty:(id)arg1 accountID:(id)arg2;
- (bool)isEqual:(id)arg1;

@end
