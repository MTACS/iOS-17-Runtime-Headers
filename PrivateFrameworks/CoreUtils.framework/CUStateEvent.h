
@interface CUStateEvent : NSObject {
    NSString * _name;
    NSDictionary * _userInfo;
}

@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly, copy) NSDictionary *userInfo;

+ (id)enterState;
+ (id)exitState;
+ (id)initialTransition;

- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (id)initWithName:(id)arg1 userInfo:(id)arg2;
- (id)name;
- (id)userInfo;

@end
