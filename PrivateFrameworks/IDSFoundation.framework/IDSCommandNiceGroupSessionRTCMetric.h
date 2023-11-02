
@interface IDSCommandNiceGroupSessionRTCMetric : NSObject <CUTRTCMetric> {
    long long  _command;
    long long  _errorCode;
    NSString * _errorDomain;
    long long  _retryCount;
    bool  _success;
}

@property (nonatomic, readonly) long long command;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic, readonly) long long errorCode;
@property (nonatomic, readonly) NSString *errorDomain;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) long long retryCount;
@property (nonatomic, readonly) unsigned short rtcType;
@property (nonatomic, readonly) bool success;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (long long)command;
- (id)dictionaryRepresentation;
- (long long)errorCode;
- (id)errorDomain;
- (id)initWithCommand:(long long)arg1 success:(bool)arg2 errorDomain:(id)arg3 errorCode:(long long)arg4 retryCount:(long long)arg5;
- (id)name;
- (long long)retryCount;
- (unsigned short)rtcType;
- (bool)success;

@end
