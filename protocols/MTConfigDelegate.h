
@protocol MTConfigDelegate <NSObject>

@required

- (MTPromise *)sources;

@optional

- (id)configValueForKeyPath:(NSString *)arg1 sources:(NSArray *)arg2;

@end
