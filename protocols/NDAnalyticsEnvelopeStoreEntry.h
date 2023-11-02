
@protocol NDAnalyticsEnvelopeStoreEntry <NSCopying>

@required

- (int)envelopeContentType;
- (NSString *)envelopeIdentifier;
- (NSDate *)envelopeSubmissionDate;

@end
