
@interface CNUIGroupsAndContainersContactsSaveResult : NSObject {
    NSArray * _addedContacts;
    NSError * _error;
    bool  _saveDidSucceed;
}

@property (nonatomic, readonly) NSArray *addedContacts;
@property (nonatomic, readonly) NSError *error;
@property (nonatomic, readonly) bool saveDidSucceed;

- (void).cxx_destruct;
- (id)addedContacts;
- (id)error;
- (id)initWithSuccess:(bool)arg1 error:(id)arg2 addedContacts:(id)arg3;
- (bool)saveDidSucceed;

@end
