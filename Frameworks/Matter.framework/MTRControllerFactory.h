
@interface MTRControllerFactory : NSObject

@property (nonatomic, readonly) bool isRunning;

+ (id)sharedInstance;

- (bool)isRunning;
- (void)shutdown;
- (id)startControllerOnExistingFabric:(id)arg1;
- (id)startControllerOnNewFabric:(id)arg1;
- (bool)startup:(id)arg1;

@end
