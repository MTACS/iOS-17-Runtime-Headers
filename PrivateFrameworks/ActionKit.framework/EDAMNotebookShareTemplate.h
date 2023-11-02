
@interface EDAMNotebookShareTemplate : FATObject {
    NSString * _notebookGuid;
    NSNumber * _privilege;
    NSArray * _recipientContacts;
    NSNumber * _recipientThreadId;
}

@property (nonatomic, retain) NSString *notebookGuid;
@property (nonatomic, retain) NSNumber *privilege;
@property (nonatomic, retain) NSArray *recipientContacts;
@property (nonatomic, retain) NSNumber *recipientThreadId;

+ (id)structFields;
+ (id)structName;

- (void).cxx_destruct;
- (id)notebookGuid;
- (id)privilege;
- (id)recipientContacts;
- (id)recipientThreadId;
- (void)setNotebookGuid:(id)arg1;
- (void)setPrivilege:(id)arg1;
- (void)setRecipientContacts:(id)arg1;
- (void)setRecipientThreadId:(id)arg1;

@end
