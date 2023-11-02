
@interface MTLToolsIOScratchBuffer : MTLToolsObject <MTLIOScratchBuffer>

@property (readonly) <MTLBuffer> *buffer;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)buffer;
- (void)dealloc;
- (id)initWithBaseObject:(id)arg1 parent:(id)arg2;

@end
