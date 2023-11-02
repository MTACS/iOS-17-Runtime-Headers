
@protocol CCUIGroupRendering <NSObject>

@required

- (bool)isGroupRenderingRequired;
- (NSArray *)punchOutRenderingViews;

@optional

- (NSArray *)punchOutRootLayers;

@end
