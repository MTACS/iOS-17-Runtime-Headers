
@protocol ConfigurableObjectProtocol <NSObject>

@required

+ (id)configureClass:(NSDictionary *)arg1;

- (int)configureInstance:(NSDictionary *)arg1;

@optional

+ (id)objectWithName:(NSString *)arg1;

- (int)read:(NSDictionary *)arg1 returnedValues:(NSMutableDictionary *)arg2;

@end
