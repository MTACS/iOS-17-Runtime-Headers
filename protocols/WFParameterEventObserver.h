
@protocol WFParameterEventObserver <NSObject>

@optional

- (void)parameterAttributesDidChange:(WFParameter *)arg1;
- (void)parameterDefaultSerializedRepresentationDidChange:(WFParameter *)arg1;
- (void)parameterStateValidityCriteriaDidChange:(WFParameter *)arg1;

@end
