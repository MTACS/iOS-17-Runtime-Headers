
@interface MTLToolsResourceGroupSPI : MTLToolsObject <MTLResourceGroupSPI>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (bool)containsResource:(id)arg1;

@end
