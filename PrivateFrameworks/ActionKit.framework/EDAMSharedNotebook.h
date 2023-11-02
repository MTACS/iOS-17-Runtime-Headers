
@interface EDAMSharedNotebook : FATObject {
    NSString * _email;
    NSString * _globalId;
    NSNumber * _id;
    NSString * _notebookGuid;
    NSNumber * _notebookModifiable;
    NSNumber * _privilege;
    NSNumber * _recipientIdentityId;
    EDAMSharedNotebookRecipientSettings * _recipientSettings;
    NSNumber * _recipientUserId;
    NSString * _recipientUsername;
    NSNumber * _serviceAssigned;
    NSNumber * _serviceCreated;
    NSNumber * _serviceUpdated;
    NSNumber * _sharerUserId;
    NSNumber * _userId;
    NSString * _username;
}

@property (nonatomic, retain) NSString *email;
@property (nonatomic, retain) NSString *globalId;
@property (nonatomic, retain) NSNumber *id;
@property (nonatomic, retain) NSString *notebookGuid;
@property (nonatomic, retain) NSNumber *notebookModifiable;
@property (nonatomic, retain) NSNumber *privilege;
@property (nonatomic, retain) NSNumber *recipientIdentityId;
@property (nonatomic, retain) EDAMSharedNotebookRecipientSettings *recipientSettings;
@property (nonatomic, retain) NSNumber *recipientUserId;
@property (nonatomic, retain) NSString *recipientUsername;
@property (nonatomic, retain) NSNumber *serviceAssigned;
@property (nonatomic, retain) NSNumber *serviceCreated;
@property (nonatomic, retain) NSNumber *serviceUpdated;
@property (nonatomic, retain) NSNumber *sharerUserId;
@property (nonatomic, retain) NSNumber *userId;
@property (nonatomic, retain) NSString *username;

+ (id)structFields;
+ (id)structName;

- (void).cxx_destruct;
- (id)email;
- (id)globalId;
- (id)id;
- (id)notebookGuid;
- (id)notebookModifiable;
- (id)privilege;
- (id)recipientIdentityId;
- (id)recipientSettings;
- (id)recipientUserId;
- (id)recipientUsername;
- (id)serviceAssigned;
- (id)serviceCreated;
- (id)serviceUpdated;
- (void)setEmail:(id)arg1;
- (void)setGlobalId:(id)arg1;
- (void)setId:(id)arg1;
- (void)setNotebookGuid:(id)arg1;
- (void)setNotebookModifiable:(id)arg1;
- (void)setPrivilege:(id)arg1;
- (void)setRecipientIdentityId:(id)arg1;
- (void)setRecipientSettings:(id)arg1;
- (void)setRecipientUserId:(id)arg1;
- (void)setRecipientUsername:(id)arg1;
- (void)setServiceAssigned:(id)arg1;
- (void)setServiceCreated:(id)arg1;
- (void)setServiceUpdated:(id)arg1;
- (void)setSharerUserId:(id)arg1;
- (void)setUserId:(id)arg1;
- (void)setUsername:(id)arg1;
- (id)sharerUserId;
- (id)userId;
- (id)username;

@end
