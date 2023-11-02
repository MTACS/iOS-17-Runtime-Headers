
@protocol HKGraphViewTileThreadRenderer

@required

- (NSString *)debugDescription;
- (void)renderTileContent;
- (bool)sameForRendering:(id <HKGraphViewTileThreadRenderer>)arg1;

@end
