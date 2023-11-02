
@protocol ECMessageBodyElement_Private <ECMessageBodyElement>

@required

- (bool)isExternallyRetained;
- (void)releaseExternally;
- (<ECMessageBodyElement_Private> *)retainExternally;

@end
