
@protocol TSTCustomStrokeProviding <NSObject>

@required

- (TSTStrokeLayer *)strokeLayerForBottomOfRow:(unsigned int)arg1;
- (TSTStrokeLayer *)strokeLayerForLeftSideOfColumn:(unsigned short)arg1;
- (TSTStrokeLayer *)strokeLayerForRightSideOfColumn:(unsigned short)arg1;
- (TSTStrokeLayer *)strokeLayerForTopOfRow:(unsigned int)arg1;

@end
