
@interface MGGroupsMediator : NSObject <NSCopying> {
    NSArray * _activities;
    NSDictionary * _groups;
    NSUUID * _identifier;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    bool  _pendingChanges;
    MGGroupsQueryAgent * _queryAgent;
}

@property (nonatomic, copy) NSArray *activities;
@property (nonatomic, readonly) NSUUID *identifier;
@property (getter=hasPendingChanges, nonatomic) bool pendingChanges;
@property (nonatomic, readonly) MGGroupsQueryAgent *queryAgent;

- (void).cxx_destruct;
- (void)_withLock:(id /* block */)arg1;
- (id)activities;
- (void)addGroup:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)currentGroups;
- (void)dealloc;
- (id)description;
- (void)endActivity:(id)arg1;
- (id)group:(id)arg1 addMember:(id)arg2;
- (id)group:(id)arg1 removeMember:(id)arg2;
- (id)group:(id)arg1 renameTo:(id)arg2;
- (id)groupsForUpdate_unsafe;
- (id)groups_unsafe;
- (bool)hasPendingChanges;
- (id)identifier;
- (id)initWithGroupsQueryAgent:(id)arg1;
- (id)queryAgent;
- (void)removeGroup:(id)arg1;
- (void)removeGroup:(id)arg1 ifExists_unsafe:(bool*)arg2;
- (void)removeGroupWithIdentifier:(id)arg1;
- (void)setActivities:(id)arg1;
- (void)setPendingChanges:(bool)arg1;
- (id)startActivityWithName:(id)arg1;
- (void)upsertGroup_unsafe:(id)arg1;

@end
