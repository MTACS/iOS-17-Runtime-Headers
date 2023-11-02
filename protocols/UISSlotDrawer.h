
@protocol UISSlotDrawer <NSObject>

@required

- (<UISDrawing> *)drawingWithStyle:(UISSlotStyle *)arg1 tag:(id)arg2 forRemote:(bool)arg3;
- (struct CGImage { }*)imageWithStyle:(UISSlotStyle *)arg1 tag:(UISSlotTag *)arg2 forRemote:(bool)arg3;

@end
