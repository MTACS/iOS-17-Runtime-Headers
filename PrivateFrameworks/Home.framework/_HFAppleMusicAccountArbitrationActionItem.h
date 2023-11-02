
@interface _HFAppleMusicAccountArbitrationActionItem : NSObject {
    NSSet * _accessories;
    NSString * _actionItemDescription;
    NAFuture * _future;
    NSDictionary * _userInfo;
}

@property (nonatomic, copy) NSSet *accessories;
@property (nonatomic, retain) NSString *actionItemDescription;
@property (nonatomic, retain) NAFuture *future;
@property (nonatomic, retain) NSDictionary *userInfo;

+ (id)loginActionItemForAccessories:(id)arg1 account:(id)arg2 contextGenerator:(id /* block */)arg3;
+ (id)logoutActionItemForAccessories:(id)arg1 desiredAccount:(id)arg2;

- (void).cxx_destruct;
- (id)accessories;
- (id)actionItemDescription;
- (id)description;
- (id)future;
- (void)setAccessories:(id)arg1;
- (void)setActionItemDescription:(id)arg1;
- (void)setFuture:(id)arg1;
- (void)setUserInfo:(id)arg1;
- (id)userInfo;

@end
