
@interface CLSHandoutAssignedItem : CLSObject <CLSRelationable> {
    NSMutableSet * _bundleIDs;
    CLSActivity * _currentActivity;
    NSString * _currentActivityID;
    NSString * _identifier;
    NSString * _title;
    int  _type;
}

@property (nonatomic, readonly, copy) NSMutableSet *bundleIDs;
@property (nonatomic, readonly) CLSActivity *currentActivity;
@property (nonatomic, copy) NSString *currentActivityID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *identifier;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, readonly) int type;

+ (id)relations;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)addBundleIDs:(id)arg1;
- (long long)authorizationStatus;
- (id)bundleIDs;
- (id)createNewActivity;
- (id)currentActivity;
- (id)currentActivityID;
- (long long)effectiveAuthorizationStatus;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(int)arg1 title:(id)arg2 handoutAttachmentID:(id)arg3;
- (void)mergeWithObject:(id)arg1;
- (void)setAppIdentifier:(id)arg1;
- (void)setCurrentActivityID:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;
- (int)type;
- (bool)validateObject:(id*)arg1;

@end
