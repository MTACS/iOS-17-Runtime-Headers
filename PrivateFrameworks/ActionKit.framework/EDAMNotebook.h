
@interface EDAMNotebook : FATObject {
    EDAMBusinessNotebook * _businessNotebook;
    EDAMUser * _contact;
    NSNumber * _defaultNotebook;
    NSString * _guid;
    NSString * _name;
    NSNumber * _published;
    EDAMPublishing * _publishing;
    EDAMNotebookRecipientSettings * _recipientSettings;
    EDAMNotebookRestrictions * _restrictions;
    NSNumber * _serviceCreated;
    NSNumber * _serviceUpdated;
    NSArray * _sharedNotebookIds;
    NSArray * _sharedNotebooks;
    NSString * _stack;
    NSNumber * _updateSequenceNum;
}

@property (nonatomic, retain) EDAMBusinessNotebook *businessNotebook;
@property (nonatomic, retain) EDAMUser *contact;
@property (nonatomic, retain) NSNumber *defaultNotebook;
@property (nonatomic, retain) NSString *guid;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) NSNumber *published;
@property (nonatomic, retain) EDAMPublishing *publishing;
@property (nonatomic, retain) EDAMNotebookRecipientSettings *recipientSettings;
@property (nonatomic, retain) EDAMNotebookRestrictions *restrictions;
@property (nonatomic, retain) NSNumber *serviceCreated;
@property (nonatomic, retain) NSNumber *serviceUpdated;
@property (nonatomic, retain) NSArray *sharedNotebookIds;
@property (nonatomic, retain) NSArray *sharedNotebooks;
@property (nonatomic, retain) NSString *stack;
@property (nonatomic, retain) NSNumber *updateSequenceNum;

+ (id)structFields;
+ (id)structName;

- (void).cxx_destruct;
- (id)businessNotebook;
- (id)contact;
- (id)defaultNotebook;
- (id)guid;
- (id)name;
- (id)published;
- (id)publishing;
- (id)recipientSettings;
- (id)restrictions;
- (id)serviceCreated;
- (id)serviceUpdated;
- (void)setBusinessNotebook:(id)arg1;
- (void)setContact:(id)arg1;
- (void)setDefaultNotebook:(id)arg1;
- (void)setGuid:(id)arg1;
- (void)setName:(id)arg1;
- (void)setPublished:(id)arg1;
- (void)setPublishing:(id)arg1;
- (void)setRecipientSettings:(id)arg1;
- (void)setRestrictions:(id)arg1;
- (void)setServiceCreated:(id)arg1;
- (void)setServiceUpdated:(id)arg1;
- (void)setSharedNotebookIds:(id)arg1;
- (void)setSharedNotebooks:(id)arg1;
- (void)setStack:(id)arg1;
- (void)setUpdateSequenceNum:(id)arg1;
- (id)sharedNotebookIds;
- (id)sharedNotebooks;
- (id)stack;
- (id)updateSequenceNum;

@end
