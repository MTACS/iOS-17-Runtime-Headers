
@protocol WFLinkEntityDescriptions

@required

+ (NSString *)countDescription;
+ (NSString *)pluralTypeDescription;
+ (NSString *)typeDescription;

@optional

+ (bool)canLowercaseTypeDescription;

@end
