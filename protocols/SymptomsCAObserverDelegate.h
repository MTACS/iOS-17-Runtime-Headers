
@protocol SymptomsCAObserverDelegate <NSObject>

@required

- (void)handleEvent:(NSDictionary *)arg1 forEventName:(NSString *)arg2;

@end
