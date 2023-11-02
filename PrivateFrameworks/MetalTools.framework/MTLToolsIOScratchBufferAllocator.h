
@interface MTLToolsIOScratchBufferAllocator : MTLToolsObject <MTLIOScratchBufferAllocator>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)dealloc;
- (id)initWithBaseObject:(id)arg1 parent:(id)arg2;
- (id)newScratchBufferWithMinimumSize:(unsigned long long)arg1;

@end
