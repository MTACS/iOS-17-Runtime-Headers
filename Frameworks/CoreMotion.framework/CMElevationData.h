
@interface CMElevationData : NSObject <NSCopying, NSSecureCoding, SRSampling> {
    unsigned long long  fElevationAscended;
    unsigned long long  fElevationDescended;
    NSDate * fEndDate;
    unsigned long long  fRecordId;
    long long  fSource;
    NSUUID * fSourceId;
    NSDate * fStartDate;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned long long elevationAscended;
@property (nonatomic, readonly) unsigned long long elevationDescended;
@property (nonatomic, readonly) NSDate *endDate;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long recordId;
@property (nonatomic, readonly) long long source;
@property (nonatomic, readonly) NSUUID *sourceId;
@property (nonatomic, readonly) NSDate *startDate;
@property (readonly) Class superclass;

+ (id)sourceName:(long long)arg1;
+ (bool)supportsSecureCoding;

- (id)binarySampleRepresentation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (unsigned long long)elevationAscended;
- (unsigned long long)elevationDescended;
- (void)encodeWithCoder:(id)arg1;
- (id)endDate;
- (id)initWithBinarySampleRepresentation:(id)arg1 metadata:(id)arg2 timestamp:(double)arg3;
- (id)initWithCoder:(id)arg1;
- (id)initWithSignificantElevationSample:(id)arg1;
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2 elevationAscended:(unsigned long long)arg3 elevationDescended:(unsigned long long)arg4 source:(long long)arg5 recordId:(unsigned long long)arg6 sourceId:(id)arg7;
- (unsigned long long)recordId;
- (long long)source;
- (id)sourceId;
- (id)startDate;

@end
