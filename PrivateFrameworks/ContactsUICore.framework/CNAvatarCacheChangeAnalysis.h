
@interface CNAvatarCacheChangeAnalysis : NSObject {
    NSData * _currentChangeHistoryToken;
    NSArray * _identifiersOfAffectedContacts;
}

@property (nonatomic, readonly, copy) NSData *currentChangeHistoryToken;
@property (nonatomic, readonly, copy) NSArray *identifiersOfAffectedContacts;

- (void).cxx_destruct;
- (id)currentChangeHistoryToken;
- (id)description;
- (id)identifiersOfAffectedContacts;
- (id)initWithCurrentChangeHistoryToken:(id)arg1 identifiersOfAffectedContacts:(id)arg2;

@end
