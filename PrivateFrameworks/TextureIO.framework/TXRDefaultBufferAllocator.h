
@interface TXRDefaultBufferAllocator : NSObject <TXRBufferAllocator>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)newBufferWithLength:(unsigned long long)arg1;

- (id)newBufferWithLength:(unsigned long long)arg1;

@end
