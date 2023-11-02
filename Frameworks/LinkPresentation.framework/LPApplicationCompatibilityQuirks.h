
@interface LPApplicationCompatibilityQuirks : NSObject

+ (bool)needsFreshWKUserContentController;
+ (bool)supportsLPLinkViewAutolayout;

@end
