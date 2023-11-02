
@interface CKSQLiteTableGroupEntry : NSObject {
    NSString * _creatingClass;
    NSDictionary * _groupData;
    NSNumber * _groupID;
    NSDate * _lastUsed;
    NSString * _name;
}

@property (nonatomic, copy) NSString *creatingClass;
@property (nonatomic, copy) NSDictionary *groupData;
@property (nonatomic, retain) NSNumber *groupID;
@property (nonatomic, retain) NSDate *lastUsed;
@property (nonatomic, copy) NSString *name;

+ (double)expirationTime;

- (void).cxx_destruct;
- (id)creatingClass;
- (void)deleteTables:(id)arg1;
- (id)description;
- (id)groupData;
- (id)groupID;
- (id)initWithName:(id)arg1;
- (bool)isExpired;
- (id)lastUsed;
- (id)name;
- (void)setCreatingClass:(id)arg1;
- (void)setGroupData:(id)arg1;
- (void)setGroupID:(id)arg1;
- (void)setLastUsed:(id)arg1;
- (void)setName:(id)arg1;

@end
