
@interface BMDiscoverabilitySignalEvent : NSObject {
    NSString * _bundleID;
    NSString * _context;
    NSString * _identifier;
    NSDictionary * _userInfo;
}

@property (nonatomic, readonly, copy) NSString *bundleID;
@property (nonatomic, readonly, copy) NSString *context;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly, copy) NSDictionary *userInfo;

+ (id)new;

- (void).cxx_destruct;
- (id)bundleID;
- (id)context;
- (id)description;
- (id)identifier;
- (id)init;
- (id)initWithIdentifier:(id)arg1 bundleID:(id)arg2 context:(id)arg3;
- (id)initWithIdentifier:(id)arg1 bundleID:(id)arg2 context:(id)arg3 userInfo:(id)arg4;
- (id)userInfo;

@end
