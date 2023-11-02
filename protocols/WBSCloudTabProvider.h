
@protocol WBSCloudTabProvider <NSObject>

@required

- (NSString *)disambiguatedName;
- (bool)isCloseRequestSupported;
- (NSString *)name;
- (NSArray *)tabs;
- (NSString *)uuid;

@end
