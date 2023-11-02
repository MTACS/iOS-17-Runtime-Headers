
@protocol NSSExternalAnalyticsEvent <NFCopying>

@required

- (NSSExternalAnalyticsRequestMetadata *)requestMetadataWithExternalAnalyticsIdentifier:(NSString *)arg1;
- (NSDictionary *)requestQueryParameters;

@end
