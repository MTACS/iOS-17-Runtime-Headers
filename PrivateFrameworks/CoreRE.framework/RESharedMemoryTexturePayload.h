
@interface RESharedMemoryTexturePayload : RESharedResourcePayload {
    NSObject<OS_dispatch_data> * _data;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_data> *data;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)data;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithBytesNoCopy:(void*)arg1 length:(unsigned long long)arg2 descriptor:(id)arg3;
- (id)initWithCoder:(id)arg1;
- (id)redactedDescription;

@end
