
@protocol NUAuxiliaryPropertiesResult <NURenderResult>

@required

- (bool)canPropagateOriginalAuxiliaryData;
- (<NUImageProperties> *)properties;

@end
