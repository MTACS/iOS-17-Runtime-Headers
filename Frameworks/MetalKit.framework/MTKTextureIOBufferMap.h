
@interface MTKTextureIOBufferMap : NSObject <TXRBufferMap> {
    void * _bytes;
}

@property (nonatomic, readonly) void*bytes;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void*)bytes;
- (id)initWithContents:(void*)arg1;

@end
