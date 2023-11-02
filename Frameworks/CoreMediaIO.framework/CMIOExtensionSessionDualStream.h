
@interface CMIOExtensionSessionDualStream : CMIOExtensionSessionStream {
    CMIOExtensionSessionStream * _activeStream;
    CMIOExtensionPropertyState * _cinematicFramingEnabled;
    CMIOExtensionSessionStream * _primaryStream;
    CMIOExtensionSessionStream * _secondaryStream;
}

@property (nonatomic, readonly) CMIOExtensionSessionStream *activeStream;
@property (nonatomic, readonly) CMIOExtensionSessionStream *primaryStream;
@property (nonatomic, readonly) CMIOExtensionSessionStream *secondaryStream;

+ (id)sessionDualStreamWithPrimaryStream:(id)arg1 secondaryStream:(id)arg2;

- (unsigned long long)activeFormatIndex;
- (id)activeStream;
- (id)cachedPropertyStateForProperty:(id)arg1;
- (id)cachedPropertyStatesForProperties:(id)arg1;
- (void)completeTransaction;
- (id)copySample:(bool*)arg1 streamID:(id)arg2 error:(id*)arg3;
- (void)dealloc;
- (id)delegate;
- (id)formats;
- (id)initWithPrimaryStream:(id)arg1 secondaryStream:(id)arg2;
- (id)primaryStream;
- (void)propertyStatesForProperties:(id)arg1 reply:(id /* block */)arg2;
- (void)receivedSample:(id)arg1 streamID:(id)arg2;
- (void)receivedScheduledOutput:(id)arg1 streamID:(id)arg2;
- (id)secondaryStream;
- (void)selectStream:(unsigned long long)arg1;
- (void)setActiveFormatIndex:(unsigned long long)arg1;
- (void)setActiveFormatIndex:(unsigned long long)arg1 reply:(id /* block */)arg2;
- (void)setDelegate:(id)arg1;
- (void)setPropertyValues:(id)arg1 reply:(id /* block */)arg2;
- (void)startStream:(id /* block */)arg1;
- (void)stopStream:(id /* block */)arg1;
- (void)updatePropertyStates:(id)arg1 streamID:(id)arg2;

@end
