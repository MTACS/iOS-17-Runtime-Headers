
@interface GEORequestCounterStatistics : NSObject <NSSecureCoding> {
    unsigned long long  _bytesReceived;
    unsigned long long  _bytesTransmitted;
    int  _durationCount;
    long long  _durationUSeconds;
    NSMutableDictionary * _resultCounts;
    unsigned long long  _usedInterfaces;
}

@property (nonatomic, readonly) unsigned long long bytesReceived;
@property (nonatomic, readonly) unsigned long long bytesTransmitted;
@property (nonatomic, readonly) int durationCount;
@property (nonatomic, readonly) long long durationUSecondsTotal;
@property (nonatomic, readonly) unsigned long long usedInterfaces;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)addUsedInterfaces:(unsigned long long)arg1;
- (unsigned long long)bytesReceived;
- (unsigned long long)bytesTransmitted;
- (unsigned long long)countForResult:(unsigned char)arg1;
- (id)description;
- (int)durationCount;
- (long long)durationUSecondsTotal;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (void)incrementBytesReceived:(unsigned long long)arg1;
- (void)incrementBytesTransmitted:(unsigned long long)arg1;
- (void)incrementCountForResult:(unsigned char)arg1;
- (void)incrementDuration:(double)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)usedInterfaces;

@end
