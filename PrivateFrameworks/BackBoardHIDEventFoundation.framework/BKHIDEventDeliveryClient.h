
@interface BKHIDEventDeliveryClient : BKHIDEventClient {
    BSContinuousMachTimer * _bufferTimer;
    NSArray * _deferringRules;
    NSArray * _deliveryRoots;
    NSArray * _keyCommandDeliveryRoots;
    NSSet * _keyCommandsRegistrations;
    NSString * _processDescription;
    NSSet * _resolutions;
}

- (void).cxx_destruct;
- (void)invalidate;

@end
