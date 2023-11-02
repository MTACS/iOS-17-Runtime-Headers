
@interface AFKMemoryDescriptorManager : NSObject {
    unsigned int  _connect;
    unsigned long long  _regID;
    unsigned int  _service;
}

@property (nonatomic, readonly) unsigned int connect;
@property (nonatomic, readonly) unsigned long long regID;

+ (id)withService:(unsigned int)arg1;

- (unsigned int)connect;
- (void)dealloc;
- (id)initWithService:(unsigned int)arg1;
- (unsigned long long)regID;

@end
