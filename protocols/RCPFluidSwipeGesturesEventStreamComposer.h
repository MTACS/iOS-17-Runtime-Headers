
@protocol RCPFluidSwipeGesturesEventStreamComposer <RCPBaseEventStreamComposer>

@required

- (void)composeDockGestureInMotion:(void *)arg1 frequency:(void *)arg2 actionBlock:(void *)arg3; // needs 3 arg types, found 8: unsigned short, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <RCPProgressEventStreamComposer> *, void*
- (void)composeDockGestureOfFlavor:(void *)arg1 motion:(void *)arg2 frequency:(void *)arg3 actionBlock:(void *)arg4; // needs 4 arg types, found 9: unsigned short, unsigned short, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <RCPProgressEventStreamComposer> *, void*
- (void)composeNavigationGestureInMotion:(void *)arg1 frequency:(void *)arg2 actionBlock:(void *)arg3; // needs 3 arg types, found 8: unsigned short, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <RCPProgressEventStreamComposer> *, void*

@end
