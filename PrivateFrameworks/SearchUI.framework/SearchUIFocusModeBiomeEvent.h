
@interface SearchUIFocusModeBiomeEvent : SearchUIBiomeEvent {
    NSString * _observedFocusModeIdentifier;
}

@property (nonatomic, retain) BMUserFocusModeComputed *biomeEvent;
@property (nonatomic, retain) NSString *observedFocusModeIdentifier;

+ (bool)supportsEvent:(id)arg1 contextualAction:(id)arg2;

- (void).cxx_destruct;
- (void)getEnabledStatusWithCompletion:(id /* block */)arg1;
- (id)initWithEvent:(id)arg1 contextualActon:(id)arg2;
- (id)observedFocusModeIdentifier;
- (void)setObservedFocusModeIdentifier:(id)arg1;

@end
