
@interface EMOrderedMessageIDData : NSObject {
    NSDictionary * _objectIDByPersistentID;
    NSArray * _objectIDs;
}

@property (nonatomic, copy) NSDictionary *objectIDByPersistentID;
@property (nonatomic, copy) NSArray *objectIDs;

- (void).cxx_destruct;
- (id)initWithObjectIDs:(id)arg1 objectIDByPersistentID:(id)arg2;
- (id)objectIDByPersistentID;
- (id)objectIDs;
- (void)setObjectIDByPersistentID:(id)arg1;
- (void)setObjectIDs:(id)arg1;

@end
