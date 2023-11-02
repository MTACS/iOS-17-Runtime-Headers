
@interface SiriUIBaseSnippetViewController : UIViewController <SiriSharedUIViewControlling, SiriUIViewController> {
    <SiriUIBaseAceObjectViewControllerDelegate> * _delegate;
    NSUUID * _instrumentationTurnIdentifier;
    SiriUISashItem * _sashItem;
    bool  _utteranceUserInteractionEnabled;
    AceObject * aceObject;
}

@property (nonatomic, retain) AceObject *aceObject;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SiriUIBaseAceObjectViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSUUID *instrumentationTurnIdentifier;
@property (nonatomic) bool isInAmbient;
@property (nonatomic) bool isInAmbientInteractivity;
@property (nonatomic, readonly) SiriUISashItem *sashItem;
@property (nonatomic, retain) SAUISnippet *snippet;
@property (readonly) Class superclass;
@property (getter=isUtteranceUserInteractionEnabled, nonatomic) bool utteranceUserInteractionEnabled;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (id)aceObject;
- (id)delegate;
- (double)desiredHeight;
- (bool)hasSash;
- (id)instrumentationTurnIdentifier;
- (bool)isInAmbient;
- (bool)isUtteranceUserInteractionEnabled;
- (id)sashItem;
- (void)setAceObject:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setInstrumentationTurnIdentifier:(id)arg1;
- (void)setIsInAmbient:(bool)arg1;
- (void)setSnippet:(id)arg1;
- (void)setUtteranceUserInteractionEnabled:(bool)arg1;
- (void)siriDidDeactivate;
- (void)siriDidReceiveAdditionalContent:(id)arg1 error:(id)arg2;
- (id)snippet;
- (void)wasAddedToTranscript;

@end
