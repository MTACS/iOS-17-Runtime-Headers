
@interface CalCalendarMigrationExchangePrincipal : NSObject <CalCalendarMigrationPrincipal> {
    bool  _delegate;
    NSString * _mailbox;
    NSString * _name;
    NSString * _ownerUid;
    NSString * _title;
    NSString * _uid;
}

@property (readonly, copy) NSString *debugDescription;
@property (getter=isDelegate, nonatomic) bool delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *mailbox;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *ownerUid;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, readonly, copy) NSString *uid;

- (void).cxx_destruct;
- (bool)addressIsAccountOwner:(id)arg1;
- (id)dictionaryForAccountProperties;
- (id)initWithUid:(id)arg1 mailbox:(id)arg2;
- (bool)isDelegate;
- (id)mailbox;
- (id)name;
- (id)ownerUid;
- (void)setDelegate:(bool)arg1;
- (void)setName:(id)arg1;
- (void)setOwnerUid:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;
- (id)uid;

@end
