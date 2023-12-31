
@interface OSActivityEventMessage : OSActivityEvent {
    NSData * _bufferData;
    NSData * _bufferPrivateData;
}

@property (nonatomic, readonly) NSMutableArray *arguments;
@property (readonly, copy) NSString *format;

- (void).cxx_destruct;
- (id)arguments;
- (void)fillEventData:(const char *)arg1 length:(unsigned long long)arg2 privateBuffer:(const char *)arg3 length:(unsigned long long)arg4;
- (id)format;

@end
