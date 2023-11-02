
@interface MTLToolsEvent : MTLToolsObject <MTLEventSPI>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) <MTLDevice> *device;
@property (nonatomic) bool enableBarrier;
@property (readonly) unsigned long long hash;
@property (copy) NSString *label;
@property (readonly) Class superclass;
@property (readonly) bool supportsRollback;

- (id)device;
- (bool)enableBarrier;
- (id)label;
- (void)setEnableBarrier:(bool)arg1;
- (void)setLabel:(id)arg1;
- (bool)supportsRollback;

@end
