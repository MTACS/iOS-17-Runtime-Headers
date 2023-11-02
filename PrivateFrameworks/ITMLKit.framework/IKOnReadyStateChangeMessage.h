
@interface IKOnReadyStateChangeMessage : NSObject {
    NSError * _error;
    unsigned int  _readyState;
    unsigned int  _statusCode;
    NSString * _statusText;
}

@property (nonatomic, copy) NSError *error;
@property (nonatomic, readonly) unsigned int readyState;
@property (nonatomic, readonly) unsigned int statusCode;
@property (nonatomic, copy) NSString *statusText;

- (void).cxx_destruct;
- (id)error;
- (id)initWithReadyState:(unsigned int)arg1 statusCode:(unsigned int)arg2 statusText:(id)arg3 error:(id)arg4;
- (unsigned int)readyState;
- (void)setError:(id)arg1;
- (void)setStatusText:(id)arg1;
- (unsigned int)statusCode;
- (id)statusText;

@end
