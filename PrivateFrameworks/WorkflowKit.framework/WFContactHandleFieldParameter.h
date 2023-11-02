
@interface WFContactHandleFieldParameter : WFContactFieldParameter

@property (nonatomic) bool allowsCustomHandles;

- (bool)allowsCustomHandles;
- (Class)multipleStateClass;
- (void)setAllowsCustomHandles:(bool)arg1;
- (id)supportedContactProperties;

@end
