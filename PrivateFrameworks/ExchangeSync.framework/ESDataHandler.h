
@interface ESDataHandler : NSObject {
    NSString * _accountID;
    NSString * _changeTrackingID;
    void * _container;
}

@property (nonatomic, copy) NSString *accountID;
@property (nonatomic, copy) NSString *changeTrackingID;
@property (nonatomic) void*container;

+ (id)newDataHandlerForDataclass:(long long)arg1 container:(void*)arg2 changeTrackingID:(id)arg3 accountID:(id)arg4;

- (void).cxx_destruct;
- (id)accountID;
- (id)changeTrackingID;
- (bool)closeDBAndSave:(bool)arg1;
- (void*)container;
- (void*)copyLocalObjectFromId:(int)arg1;
- (id)copyOfAllLocalObjectsInContainer;
- (long long)dataclass;
- (void)dealloc;
- (void)drainContainer;
- (void)drainSuperfluousChanges;
- (id)getDAExceptionObjectWithLocalItem:(void*)arg1 originalEvent:(id)arg2 account:(id)arg3;
- (id)getDAObjectWithLocalItem:(void*)arg1 serverId:(id)arg2 account:(id)arg3;
- (int)getIdFromLocalObject:(void*)arg1;
- (id)initWithContainer:(void*)arg1 changeTrackingID:(id)arg2 accountID:(id)arg3;
- (void)openDB;
- (bool)saveContainer;
- (void)setAccountID:(id)arg1;
- (void)setChangeTrackingID:(id)arg1;
- (void)setContainer:(void*)arg1;
- (bool)wipeServerIds;

@end
