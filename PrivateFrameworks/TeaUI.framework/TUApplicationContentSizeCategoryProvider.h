
@interface TUApplicationContentSizeCategoryProvider : NSObject <TUContentSizeCategoryProviderType>

@property (nonatomic, readonly) NSString *currentContentSizeCategory;

- (id)currentContentSizeCategory;
- (id)init;

@end
