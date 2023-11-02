
@protocol HMFLogging <NSObject>

@required

+ (NSObject *)logCategory;

@optional

- (NSString *)logIdentifier;

@end
