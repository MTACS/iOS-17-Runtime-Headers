
@interface NDAnalyticsEnvelopeStoreEntry : NSObject <NDAnalyticsEnvelopeStoreEntry> {
    int  _envelopeContentType;
    NSString * _envelopeIdentifier;
    unsigned long long  _submissionDateMillisecondsSince1970;
}

@property (nonatomic) int envelopeContentType;
@property (nonatomic, copy) NSString *envelopeIdentifier;
@property (nonatomic, copy) NSDate *envelopeSubmissionDate;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (int)envelopeContentType;
- (id)envelopeIdentifier;
- (id)envelopeSubmissionDate;
- (unsigned long long)hash;
- (id)init;
- (id)initWithStringRepresentation:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setEnvelopeContentType:(int)arg1;
- (void)setEnvelopeIdentifier:(id)arg1;
- (void)setEnvelopeSubmissionDate:(id)arg1;
- (id)stringRepresentation;

@end
