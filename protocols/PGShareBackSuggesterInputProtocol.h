
@protocol PGShareBackSuggesterInputProtocol

@required

- (PHAsset *)asset;
- (NSDate *)creationDate;
- (double)horizontalAccuracy;
- (NSDate *)localCreationDate;
- (NSString *)localIdentifier;
- (CLLocation *)location;
- (NSTimeZone *)timeZone;

@end
