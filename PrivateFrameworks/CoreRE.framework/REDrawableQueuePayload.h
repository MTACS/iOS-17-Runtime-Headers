
@interface REDrawableQueuePayload : RESharedResourcePayload {
    unsigned int  _height;
    unsigned long long  _pixelFormat;
    NSObject<OS_xpc_object> * _queueStateShmem;
    NSArray * _textureHandles;
    unsigned int  _width;
}

@property (nonatomic, readonly) unsigned int height;
@property (nonatomic, readonly) unsigned long long pixelFormat;
@property (nonatomic, readonly) NSObject<OS_xpc_object> *queueStateShmem;
@property (nonatomic, readonly) NSArray *textureHandles;
@property (nonatomic, readonly) unsigned int width;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned int)height;
- (id)initWithCoder:(id)arg1;
- (id)initWithWidth:(unsigned int)arg1 height:(unsigned int)arg2 pixelFormat:(unsigned long long)arg3 textureHandles:(id)arg4 queueStateShmem:(void*)arg5 queueStateLength:(unsigned long long)arg6;
- (unsigned long long)pixelFormat;
- (id)queueStateShmem;
- (id)redactedDescription;
- (id)textureHandles;
- (unsigned int)width;

@end
