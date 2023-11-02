
@interface MTLMessageFilter : NSObject {
    <MTLDevice> * _device;
    unsigned long long  _messageType;
}

@property (readonly, retain) <MTLDevice> *device;
@property (readonly) unsigned long long messageType;

+ (id)filter:(unsigned long long)arg1 device:(id)arg2;

- (id)device;
- (id)init:(unsigned long long)arg1 device:(id)arg2;
- (unsigned long long)messageType;
- (void)setDevice:(id)arg1;

@end
