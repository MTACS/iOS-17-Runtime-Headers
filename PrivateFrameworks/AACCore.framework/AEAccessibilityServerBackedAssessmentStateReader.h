
@interface AEAccessibilityServerBackedAssessmentStateReader : NSObject <AEAssessmentStateReading> {
    <AEAccessibilityServerPrimitives> * _accessibilityServerPrimitives;
    bool  _active;
    <AEObservation> * _guidedAccessActiveStateChangeObservation;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (getter=isActive, nonatomic) bool active;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithAccessibilityServerPrimitives:(id)arg1 queue:(id)arg2;
- (bool)isActive;
- (void)setActive:(bool)arg1;

@end
