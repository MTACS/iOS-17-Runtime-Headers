
@interface TCMPSImageAllocator : NSObject <MPSImageAllocator> {
    unsigned long long  _format;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)imageForCommandBuffer:(id)arg1 imageDescriptor:(id)arg2 kernel:(id)arg3;
- (id)initWithCoder:(id)arg1;
- (id)initWithFormat:(unsigned long long)arg1;

@end
