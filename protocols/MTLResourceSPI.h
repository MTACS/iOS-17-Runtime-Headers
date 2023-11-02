
@protocol MTLResourceSPI <MTLResource>

@required

- (unsigned long long)allocationID;
- (bool)doesAliasAllResources:(const id*)arg1 count:(unsigned long long)arg2;
- (bool)doesAliasAnyResources:(const id*)arg1 count:(unsigned long long)arg2;
- (bool)doesAliasResource:(id <MTLResource>)arg1;
- (bool)isComplete;
- (bool)isPurgeable;
- (unsigned long long)protectionOptions;
- (int)responsibleProcess;
- (void)setResponsibleProcess:(int)arg1;
- (unsigned long long)unfilteredResourceOptions;
- (void)waitUntilComplete;

@optional

- (int)setOwnerWithIdentity:(unsigned int)arg1;

@end
