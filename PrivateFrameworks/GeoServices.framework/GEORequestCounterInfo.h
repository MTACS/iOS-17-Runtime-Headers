
@interface GEORequestCounterInfo : NSObject <NSSecureCoding> {
    unsigned long long  _bytesReceived;
    unsigned long long  _bytesTransmitted;
    int  _durationCount;
    long long  _durationUSeconds;
    NSDictionary * _requestTypeStatistics;
    unsigned long long  _usedInterfaces;
}

@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic, readonly) NSArray *requestTypes;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_appendFormattedCSVStringTo:(id)arg1 forAppId:(id)arg2;
- (void)_appendFormattedStringTo:(id)arg1;
- (void)_generateAggregateStatistics;
- (id)description;
- (id)dictionaryRepresentation;
- (double)durationAverage;
- (double)durationAverageForType:(struct { int x1; union { int x_2_1_1; int x_2_1_2; int x_2_1_3; } x2; })arg1;
- (double)durationTotal;
- (double)durationTotalForType:(struct { int x1; union { int x_2_1_1; int x_2_1_2; int x_2_1_3; } x2; })arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)enumerateRequestTypes:(id /* block */)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)nonZeroResultTypesForType:(struct { int x1; union { int x_2_1_1; int x_2_1_2; int x_2_1_3; } x2; })arg1;
- (unsigned long long)numberOfRequestsForType:(struct { int x1; union { int x_2_1_1; int x_2_1_2; int x_2_1_3; } x2; })arg1 result:(unsigned char)arg2;
- (unsigned long long)recvBytes;
- (unsigned long long)recvBytesForType:(struct { int x1; union { int x_2_1_1; int x_2_1_2; int x_2_1_3; } x2; })arg1;
- (id)requestTypes;
- (unsigned long long)usedInterfaces;
- (unsigned long long)usedInterfacesForType:(struct { int x1; union { int x_2_1_1; int x_2_1_2; int x_2_1_3; } x2; })arg1;
- (unsigned long long)xmitBytes;
- (unsigned long long)xmitBytesForType:(struct { int x1; union { int x_2_1_1; int x_2_1_2; int x_2_1_3; } x2; })arg1;

@end
