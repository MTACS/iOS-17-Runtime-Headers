
@interface HMDHH2DuplicateUserModelTuple : NSObject {
    NSUUID * _homeModelID;
    NSString * _userMergeID;
}

@property (nonatomic, readonly) NSUUID *homeModelID;
@property (nonatomic, readonly) NSString *userMergeID;

- (void).cxx_destruct;
- (id)description;
- (id)homeModelID;
- (id)initWithHomeModelID:(id)arg1 userMergeID:(id)arg2;
- (id)userMergeID;

@end
