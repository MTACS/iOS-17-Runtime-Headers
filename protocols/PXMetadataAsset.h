
@protocol PXMetadataAsset <NSObject>

@required

- (NSDate *)creationDate;
- (CLLocation *)location;

@optional

- (bool)cloudIsDeletable;

@end
