
@interface REMAssignment : NSObject <NSCopying, NSSecureCoding, REMDAChangeTrackableFetchableModel, REMDAChangedModelObjectResult, REMObjectIDProviding, _REMDAChangeTrackableModel> {
    bool  __debug_cdAssigneeLinked;
    bool  __debug_cdOriginatorLinked;
    REMObjectID * _accountID;
    NSDate * _assignedDate;
    REMObjectID * _assigneeID;
    REMObjectID * _objectID;
    REMObjectID * _originatorID;
    REMObjectID * _reminderID;
    long long  _status;
}

@property (nonatomic) bool _debug_cdAssigneeLinked;
@property (nonatomic) bool _debug_cdOriginatorLinked;
@property (nonatomic, readonly) REMObjectID *accountID;
@property (nonatomic, copy) NSDate *assignedDate;
@property (nonatomic, readonly) REMObjectID *assigneeID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *externalIdentifierForMarkedForDeletionObject;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) REMObjectID *objectID;
@property (nonatomic, readonly) REMObjectID *originatorID;
@property (nonatomic, readonly) REMObjectID *remObjectID;
@property (nonatomic, readonly) REMObjectID *reminderID;
@property (nonatomic, readonly) long long status;
@property (readonly) Class superclass;

+ (id)cdEntityName;
+ (bool)isChangeTrackableFetchableModel;
+ (bool)isChangeTrackableModel;
+ (id)newObjectID;
+ (id)nullifiedOriginatorAssignmentWithObjectID:(id)arg1 accountID:(id)arg2 reminderID:(id)arg3 assigneeID:(id)arg4 status:(long long)arg5 assignedDate:(id)arg6;
+ (id)objectIDWithUUID:(id)arg1;
+ (double)orderValueWithAssignedDate:(id)arg1 objectIdentifier:(id)arg2;
+ (id /* block */)rem_DA_deletedKeyFromConcealedModelObjectBlock;
+ (id /* block */)rem_DA_deletedKeyFromTombstoneBlock;
+ (id /* block */)rem_DA_fetchByObjectIDBlock;
+ (id /* block */)rem_DA_fetchByObjectIDsBlock;
+ (id)rem_DA_propertiesAffectingIsConcealed;
+ (bool)rem_DA_supportsConcealedObjects;
+ (bool)rem_DA_supportsFetching;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)_debug_cdAssigneeLinked;
- (bool)_debug_cdOriginatorLinked;
- (id)accountID;
- (id)assignedDate;
- (id)assigneeID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithObjectID:(id)arg1 accountID:(id)arg2 reminderID:(id)arg3 assigneeID:(id)arg4 originatorID:(id)arg5 status:(long long)arg6;
- (id)initWithObjectID:(id)arg1 accountID:(id)arg2 reminderID:(id)arg3 assigneeID:(id)arg4 originatorID:(id)arg5 status:(long long)arg6 assignedDate:(id)arg7;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToAssignment:(id)arg1;
- (bool)isOriginatorNullified;
- (id)objectID;
- (double)orderValue;
- (id)originatorID;
- (id)remObjectID;
- (id)reminderID;
- (void)setAssignedDate:(id)arg1;
- (void)set_debug_cdAssigneeLinked:(bool)arg1;
- (void)set_debug_cdOriginatorLinked:(bool)arg1;
- (long long)status;

@end
