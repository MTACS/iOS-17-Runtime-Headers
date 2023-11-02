
@interface REAttributeDescriptor : NSObject <NSSecureCoding> {
    unsigned int  _count;
    NSString * _name;
    unsigned int  _payloadOffset;
    unsigned int  _stride;
}

@property (nonatomic, readonly) unsigned long long bufferSize;
@property (nonatomic, readonly) unsigned int count;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) unsigned int payloadOffset;
@property (nonatomic, readonly) unsigned int stride;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned long long)bufferSize;
- (unsigned int)count;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 buffer:(const void*)arg2 elementSize:(unsigned long long)arg3 payloadBuilder:(void*)arg4;
- (id)initWithName:(id)arg1 payloadOffset:(unsigned int)arg2 count:(unsigned int)arg3 stride:(unsigned int)arg4;
- (id)name;
- (unsigned int)payloadOffset;
- (unsigned int)stride;
- (bool)validateWithPayloadSize:(unsigned long long)arg1 error:(id*)arg2;

@end
