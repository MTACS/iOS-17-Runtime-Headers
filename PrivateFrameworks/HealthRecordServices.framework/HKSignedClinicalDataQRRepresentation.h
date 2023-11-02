
@interface HKSignedClinicalDataQRRepresentation : NSObject <NSCopying, NSSecureCoding> {
    NSArray * _alreadyScannedSegments;
    long long  _sourceType;
}

@property (nonatomic, readonly, copy) NSArray *alreadyScannedSegments;
@property (nonatomic, readonly, copy) NSNumber *expectedNumberOfSegments;
@property (nonatomic, readonly) bool hasAllExpectedSegments;
@property (nonatomic, readonly) long long sourceType;

+ (id)representationForEUDCCPayloadData:(id)arg1 error:(id*)arg2;
+ (id)representationForJWSPayload:(id)arg1 error:(id*)arg2;
+ (id)representationForJWSPayloadData:(id)arg1 error:(id*)arg2;
+ (id)representationForRawContent:(id)arg1 sourceType:(long long)arg2 error:(id*)arg3;
+ (id)representationWithQRSegment:(id)arg1;
+ (id)representationWithSMARTHealthCardQRSegmentData:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)alreadyScannedSegments;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)expectedNumberOfSegments;
- (bool)hasAllExpectedSegments;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithSourceType:(long long)arg1;
- (bool)isEqual:(id)arg1;
- (id)orderedSegmentsWithError:(id*)arg1;
- (id)representationByAddingQRSegment:(id)arg1 error:(id*)arg2;
- (long long)sourceType;

@end
