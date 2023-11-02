
@interface VRXVisualResponseShown : VRXTurnBasedInstrumentationEvent {
    _TtC9SnippetUI21RFVisualResponseShown * _visualResponseShown;
}

@property (readonly) _TtC9SnippetUI21RFVisualResponseShown *visualResponseShown;

- (void).cxx_destruct;
- (void)emitWithTurnIdentifier:(id)arg1;
- (id)initWithCardData:(id)arg1 responseViewId:(id)arg2;
- (id)visualResponseShown;

@end
