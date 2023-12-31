
@interface _UIMotionEffectEventProvider : NSObject {
    <_UIMotionEffectEventConsumer> * _consumer;
}

@property <_UIMotionEffectEventConsumer> *consumer;

- (id)consumer;
- (id)currentEvent;
- (double)fastUpdateIntervalForLogs;
- (void)setConsumer:(id)arg1;
- (void)setSlowUpdatesEnabled:(bool)arg1;
- (bool)shouldLogEvents;
- (double)slowUpdateIntervalForLogs;
- (void)startGeneratingEvents;
- (void)stopGeneratingEvents;
- (bool)wantsSynchronizedUpdates;

@end
