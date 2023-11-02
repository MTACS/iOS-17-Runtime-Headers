
@interface AVExecutionEnvironment : NSObject

@property (readonly) NSString *platformIdentifier;

+ (id)currentPlatformIdentifier;
+ (void)initialize;
+ (void)resetPlatformIdentifierForQueue:(id)arg1;
+ (void)setPlatformIdentifier:(id)arg1 forQueue:(id)arg2;
+ (id)sharedExecutionEnvironment;

- (id)platformIdentifier;

@end
