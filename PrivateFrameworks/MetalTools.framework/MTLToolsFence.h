
@interface MTLToolsFence : MTLToolsObject <MTLFenceSPI>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) <MTLDevice> *device;
@property (readonly) unsigned long long hash;
@property (copy) NSString *label;
@property (readonly) Class superclass;

- (id)device;
- (id)label;
- (void)setLabel:(id)arg1;

@end
