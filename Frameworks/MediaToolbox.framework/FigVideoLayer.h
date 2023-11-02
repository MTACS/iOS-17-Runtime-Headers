
@interface FigVideoLayer : FigThreadSafeCALayer {
    FigVideoLayerInternal * _videoLayer;
}

+ (id)defaultActionForKey:(id)arg1;

- (void)_sendVideoLayerIsBeingServicedNotification;
- (void)_setupInternalFigVideoLayer;
- (void)_setupTraceLevel;
- (id)actionForKey:(id)arg1;
- (void)dealloc;
- (id)initWithDeferredTransaction:(struct OpaqueFigDeferredTransaction { }*)arg1;
- (id)initWithLayer:(id)arg1;
- (id)initWithoutDeferredTransaction;
- (bool)isVideoLayerBeingServiced;
- (void)layerDidBecomeVisible:(bool)arg1;
- (id)layerDisplayName;
- (void)notificationBarrier;

@end
