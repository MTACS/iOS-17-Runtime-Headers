
@protocol GEOTransitIconDataSource <NSObject>

@required

- (int)iconType;

@optional

- (unsigned int)cartoID;
- (unsigned int)defaultTransitType;
- (unsigned int)iconAttributeKey;
- (unsigned int)iconAttributeValue;
- (GEOStyleAttributes *)styleAttributes;

@end
