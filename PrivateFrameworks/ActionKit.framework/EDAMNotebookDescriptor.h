
@interface EDAMNotebookDescriptor : FATObject {
    NSString * _contactName;
    NSString * _guid;
    NSNumber * _hasSharedNotebook;
    NSNumber * _joinedUserCount;
    NSString * _notebookDisplayName;
}

@property (nonatomic, retain) NSString *contactName;
@property (nonatomic, retain) NSString *guid;
@property (nonatomic, retain) NSNumber *hasSharedNotebook;
@property (nonatomic, retain) NSNumber *joinedUserCount;
@property (nonatomic, retain) NSString *notebookDisplayName;

+ (id)structFields;
+ (id)structName;

- (void).cxx_destruct;
- (id)contactName;
- (id)guid;
- (id)hasSharedNotebook;
- (id)joinedUserCount;
- (id)notebookDisplayName;
- (void)setContactName:(id)arg1;
- (void)setGuid:(id)arg1;
- (void)setHasSharedNotebook:(id)arg1;
- (void)setJoinedUserCount:(id)arg1;
- (void)setNotebookDisplayName:(id)arg1;

@end
