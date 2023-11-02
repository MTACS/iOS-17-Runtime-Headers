
@interface MTLToolsDepthStencilState : MTLToolsObject <MTLDepthStencilStateSPI>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) <MTLDevice> *device;
@property (readonly) unsigned long long hash;
@property (readonly) NSString *label;
@property (readonly) bool readsDepth;
@property (readonly) bool readsStencil;
@property (readonly) Class superclass;
@property (readonly) bool writesDepth;
@property (readonly) bool writesStencil;

- (void)dealloc;
- (id)device;
- (id)initWithDepthStencilState:(id)arg1 descriptor:(id)arg2 device:(id)arg3;
- (id)label;
- (bool)readsDepth;
- (bool)readsStencil;
- (bool)writesDepth;
- (bool)writesStencil;

@end
