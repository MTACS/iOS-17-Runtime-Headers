
@interface MRExternalDeviceConnectionDetails : NSObject {
    id /* block */  _completion;
    unsigned int  _qos;
    NSString * _reason;
    NSString * _requestID;
    NSDate * _startDate;
}

@property (nonatomic, copy) id /* block */ completion;
@property (nonatomic) unsigned int qos;
@property (nonatomic, retain) NSString *reason;
@property (nonatomic, retain) NSString *requestID;
@property (nonatomic, retain) NSDate *startDate;

- (void).cxx_destruct;
- (id /* block */)completion;
- (id)description;
- (unsigned int)qos;
- (id)reason;
- (id)requestID;
- (void)setCompletion:(id /* block */)arg1;
- (void)setQos:(unsigned int)arg1;
- (void)setReason:(id)arg1;
- (void)setRequestID:(id)arg1;
- (void)setStartDate:(id)arg1;
- (id)startDate;

@end
