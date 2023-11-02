
@interface PLLibraryServicesStateNode : NSObject {
    NSString * _logPrefix;
    NSOperationQueue * _operationQueue;
    unsigned int  _qos;
    long long  _state;
}

@property (readonly, copy) NSString *logPrefix;
@property (nonatomic, readonly) NSOperationQueue *operationQueue;
@property (nonatomic) unsigned int qos;
@property (nonatomic, readonly) long long state;

- (void).cxx_destruct;
- (id)description;
- (id)initWithLibraryServicesState:(long long)arg1 qualityOfService:(unsigned int)arg2 logPrefix:(id)arg3;
- (id)logPrefix;
- (id)operationQueue;
- (unsigned int)qos;
- (void)run;
- (void)setQos:(unsigned int)arg1;
- (long long)state;
- (void)terminate;

@end
