
@interface _GCHIDEventIOKitClient : _GCHIDEventSubject {
    struct __IOHIDEventSystemClient { } * _ioClient;
}

- (void)dealloc;
- (id)init;
- (id)initWithClient:(struct __IOHIDEventSystemClient { }*)arg1 queue:(id)arg2;

@end
