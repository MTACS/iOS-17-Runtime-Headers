
@interface HMDMRAVEndpoint : HMFObject {
    void * _mravEndpoint;
}

@property (nonatomic, readonly) void*mravEndpoint;

- (id)attributeDescriptions;
- (void)dealloc;
- (unsigned long long)hash;
- (id)initWithMRAVEndpoint:(void*)arg1;
- (bool)isEqual:(id)arg1;
- (void*)mravEndpoint;

@end
