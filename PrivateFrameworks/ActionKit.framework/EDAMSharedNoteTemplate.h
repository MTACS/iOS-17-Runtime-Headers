
@interface EDAMSharedNoteTemplate : FATObject {
    NSString * _noteGuid;
    NSNumber * _privilege;
    NSArray * _recipientContacts;
    NSNumber * _recipientThreadId;
}

@property (nonatomic, retain) NSString *noteGuid;
@property (nonatomic, retain) NSNumber *privilege;
@property (nonatomic, retain) NSArray *recipientContacts;
@property (nonatomic, retain) NSNumber *recipientThreadId;

+ (id)structFields;
+ (id)structName;

- (void).cxx_destruct;
- (id)noteGuid;
- (id)privilege;
- (id)recipientContacts;
- (id)recipientThreadId;
- (void)setNoteGuid:(id)arg1;
- (void)setPrivilege:(id)arg1;
- (void)setRecipientContacts:(id)arg1;
- (void)setRecipientThreadId:(id)arg1;

@end
