
@interface BCSLocaleHelper : NSObject <BCSLocaleHelperProtocol>

@property (nonatomic, readonly) NSLocale *currentLocale;

- (id)currentLocale;
- (id)description;

@end
