
@protocol AVFigRoutingContextOutputDeviceTranslator <NSObject>

@required

- (void)addOutputDevice:(void *)arg1 withOptions:(void *)arg2 toRoutingContext:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 9: AVOutputDevice *, struct __CFDictionary { }*, struct OpaqueFigRoutingContext { }*, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, AVOutputContextDestinationChange *, void*
- (AVOutputDevice *)outputDeviceFromRoutingContext:(struct OpaqueFigRoutingContext { }*)arg1;
- (NSArray *)outputDevicesFromRoutingContext:(struct OpaqueFigRoutingContext { }*)arg1;
- (AVOutputDevice *)predictedOutputDeviceFromRoutingContext:(struct OpaqueFigRoutingContext { }*)arg1;
- (void)removeOutputDevice:(void *)arg1 withOptions:(void *)arg2 fromRoutingContext:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 9: AVOutputDevice *, struct __CFDictionary { }*, struct OpaqueFigRoutingContext { }*, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, AVOutputContextDestinationChange *, void*
- (void)setOutputDevice:(void *)arg1 withOptions:(void *)arg2 onRoutingContext:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 9: AVOutputDevice *, struct __CFDictionary { }*, struct OpaqueFigRoutingContext { }*, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, AVOutputContextDestinationChange *, void*
- (void)setOutputDevices:(void *)arg1 withOptions:(void *)arg2 onRoutingContext:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 9: NSArray *, struct __CFDictionary { }*, struct OpaqueFigRoutingContext { }*, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, AVOutputContextDestinationChange *, void*

@end
