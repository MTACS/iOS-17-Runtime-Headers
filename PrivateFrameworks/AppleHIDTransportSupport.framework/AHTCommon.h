
@interface AHTCommon : NSObject {
    unsigned int  _connect;
    NSString * _name;
    unsigned int  _service;
}

@property (nonatomic, readonly) unsigned int connect;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, readonly) unsigned int service;

- (void).cxx_destruct;
- (void)close;
- (unsigned int)connect;
- (void)dealloc;
- (id)getBootLoader;
- (bool)getPower:(long long*)arg1;
- (id)initWithService:(unsigned int)arg1;
- (id)name;
- (bool)open;
- (unsigned long long)registryID;
- (bool)reset;
- (unsigned int)service;
- (void)setName:(id)arg1;
- (bool)setPower:(long long)arg1;

@end
