
@interface SRMessagesUsageReport : NSObject <NSSecureCoding, SRSampleExporting, SRSampling> {
    double  _duration;
    double  _startTime;
    long long  _totalIncomingMessages;
    long long  _totalOutgoingMessages;
    long long  _totalUniqueContacts;
    NSMutableSet * _uniqueContacts;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property double duration;
@property (readonly) unsigned long long hash;
@property double startTime;
@property (readonly) Class superclass;
@property long long totalIncomingMessages;
@property long long totalOutgoingMessages;
@property (readonly) long long totalUniqueContacts;
@property (retain) NSMutableSet *uniqueContacts;

+ (bool)supportsSecureCoding;
+ (id)usageReportWithInterval:(id)arg1;

- (id)binarySampleRepresentation;
- (void)dealloc;
- (id)description;
- (double)duration;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithBinarySampleRepresentation:(id)arg1 metadata:(id)arg2 timestamp:(double)arg3;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setDuration:(double)arg1;
- (void)setStartTime:(double)arg1;
- (void)setTotalIncomingMessages:(long long)arg1;
- (void)setTotalOutgoingMessages:(long long)arg1;
- (void)setUniqueContacts:(id)arg1;
- (id)sr_dictionaryRepresentation;
- (double)startTime;
- (long long)totalIncomingMessages;
- (long long)totalOutgoingMessages;
- (long long)totalUniqueContacts;
- (id)uniqueContacts;

@end
