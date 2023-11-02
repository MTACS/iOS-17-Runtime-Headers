
@protocol GCPressedStateInput <NSObject>

@required

- (bool)isPressed;
- (double)lastPressedStateLatency;
- (double)lastPressedStateTimestamp;
- (id /* block */)pressedDidChangeHandler:(void *)arg1; // needs 1 arg types, found 7: id /* block */, <GCPhysicalInputElement> *, <GCPressedStateInput> *, bool, void*, id, SEL
- (void)setPressedDidChangeHandler:(void *)arg1; // needs 1 arg types, found 8: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <GCPhysicalInputElement> *, <GCPressedStateInput> *, bool, void*
- (NSSet *)sources;

@end
