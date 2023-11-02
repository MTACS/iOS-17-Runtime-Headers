
@interface _ATXDistributedNotification : NSObject {
    NSString * _name;
    double  _timestamp;
    NSDictionary * _userInfo;
}

@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) double timestamp;
@property (nonatomic, readonly) NSDictionary *userInfo;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)init;
- (id)initWithName:(id)arg1 userInfo:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualTo_ATXDistributedNotification:(id)arg1;
- (id)name;
- (double)timestamp;
- (id)userInfo;

@end
