
@protocol HMFObject <NSObject>

@required

+ (NSString *)shortDescription;

- (NSString *)privateDescription;
- (NSString *)shortDescription;

@optional

- (NSArray *)attributeDescriptions;
- (NSString *)propertyDescription;

@end
