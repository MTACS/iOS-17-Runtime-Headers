
@interface BKHIDPointerEventRecord : NSObject <BSDescriptionProviding> {
    double  _destinationCaptureTime;
    NSSet * _destinations;
    bool  _didTrackButtonDown;
    bool  _didTrackPointerMovement;
    <BKHIDEventSenderInfo> * _senderInfo;
    bool  _trackingButtonDown;
    bool  _trackingPointerMovement;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) double destinationCaptureTime;
@property (nonatomic, retain) NSSet *destinations;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) <BKHIDEventSenderInfo> *senderInfo;
@property (readonly) Class superclass;
@property (nonatomic) bool trackingButtonDown;
@property (nonatomic) bool trackingPointerMovement;

- (void).cxx_destruct;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (double)destinationCaptureTime;
- (id)destinations;
- (id)senderInfo;
- (void)setDestinationCaptureTime:(double)arg1;
- (void)setDestinations:(id)arg1;
- (void)setSenderInfo:(id)arg1;
- (void)setTrackingButtonDown:(bool)arg1;
- (void)setTrackingPointerMovement:(bool)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (bool)trackingButtonDown;
- (bool)trackingPointerMovement;

@end
