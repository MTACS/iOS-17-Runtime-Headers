
@interface IDSDeliveryControllerTimeMetric : NSObject <CUTRTCMetric> {
    long long  _endpointCount;
    long long  _responseCode;
    double  _timeToSend;
    bool  _usedMMCS;
    bool  _usedPipeline;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic, readonly) long long endpointCount;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) long long responseCode;
@property (nonatomic, readonly) unsigned short rtcType;
@property (readonly) Class superclass;
@property (nonatomic, readonly) double timeToSend;
@property (nonatomic, readonly) bool usedMMCS;
@property (nonatomic, readonly) bool usedPipeline;

- (id)dictionaryRepresentation;
- (long long)endpointCount;
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2 endpointCount:(long long)arg3 usedPipeline:(bool)arg4 usedMMCS:(bool)arg5 responseCode:(long long)arg6;
- (id)name;
- (long long)responseCode;
- (unsigned short)rtcType;
- (double)timeToSend;
- (bool)usedMMCS;
- (bool)usedPipeline;

@end
