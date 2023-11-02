
@protocol APPCPromotableAppStoreSupplementalContext <APPCSecureCodable, NSCopying>

@required

- (NSString *)adamId;
- (NSDictionary *)additionalClickCaps;
- (NSDictionary *)additionalImpressionCaps;
- (NSDictionary *)appMetadataFields;
- (NSDictionary *)clickCap;
- (NSDictionary *)impressionCap;
- (NSDate *)requestTime;
- (NSString *)storeFront;
- (NSString *)storeFrontLocale;

@end
