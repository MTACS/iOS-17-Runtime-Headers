
@interface GEOExternalRequestCounterInfo : NSObject <GEOXPCSerializable> {
    NSString * _appId;
    NSDate * _endTime;
    long long  _recvBytes;
    NSString * _requestSubtype;
    NSString * _requestType;
    NSString * _source;
    NSDate * _startTime;
    unsigned long long  _usedInterface;
    long long  _xmitBytes;
}

@property (nonatomic, retain) NSString *appId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSDate *endTime;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long recvBytes;
@property (nonatomic, retain) NSString *requestSubtype;
@property (nonatomic, retain) NSString *requestType;
@property (nonatomic, retain) NSString *source;
@property (nonatomic, retain) NSDate *startTime;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long usedInterface;
@property (nonatomic) long long xmitBytes;

- (void).cxx_destruct;
- (id)appId;
- (void)encodeToXPCDictionary:(id)arg1;
- (id)endTime;
- (id)initWithXPCDictionary:(id)arg1 error:(id*)arg2;
- (long long)recvBytes;
- (id)requestSubtype;
- (id)requestType;
- (void)setAppId:(id)arg1;
- (void)setEndTime:(id)arg1;
- (void)setRecvBytes:(long long)arg1;
- (void)setRequestSubtype:(id)arg1;
- (void)setRequestType:(id)arg1;
- (void)setSource:(id)arg1;
- (void)setStartTime:(id)arg1;
- (void)setUsedInterface:(unsigned long long)arg1;
- (void)setXmitBytes:(long long)arg1;
- (id)source;
- (id)startTime;
- (unsigned long long)usedInterface;
- (long long)xmitBytes;

@end
