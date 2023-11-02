
@interface HIDUserDevice : NSObject {
    id /* block */  _cancelHandler;
    struct __IOHIDUserDevice { } * _device;
    id /* block */  _getReportHandler;
    unsigned int  _service;
    id /* block */  _setReportHandler;
}

@property (readonly) unsigned int service;

- (void).cxx_destruct;
- (void)activate;
- (void)cancel;
- (void)dealloc;
- (id)description;
- (bool)handleReport:(id)arg1 error:(out id*)arg2;
- (bool)handleReport:(id)arg1 withTimestamp:(unsigned long long)arg2 error:(out id*)arg3;
- (id)initWithProperties:(id)arg1;
- (id)propertyForKey:(id)arg1;
- (unsigned int)service;
- (void)setCancelHandler:(id /* block */)arg1;
- (void)setDispatchQueue:(id)arg1;
- (void)setGetReportHandler:(id /* block */)arg1;
- (bool)setProperty:(id)arg1 forKey:(id)arg2;
- (void)setSetReportHandler:(id /* block */)arg1;

@end
