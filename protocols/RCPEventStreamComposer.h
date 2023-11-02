
@protocol RCPEventStreamComposer <RCPTouchEventStreamComposer, RCPButtonEventStreamComposer, RCPFluidSwipeGesturesEventStreamComposer, RCPPencilEventStreamComposer, RCPVendorEventStreamComposer, RCPPointerEventStreamComposer, RCPGameControllerEventStreamComposer>

@required

- (void)composeWithSender:(void *)arg1 actionBlock:(void *)arg2; // needs 2 arg types, found 7: RCPEventSenderProperties *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <RCPEventStreamComposer> *, void*

@end
