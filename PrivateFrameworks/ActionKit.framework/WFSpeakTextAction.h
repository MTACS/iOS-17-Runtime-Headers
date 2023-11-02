
@interface WFSpeakTextAction : WFAction {
    <WFActionExtendedOperation> * _extendedOperation;
    WFSpeakTextActionOperation * _runningOperation;
}

@property (nonatomic, retain) WFSpeakTextActionOperation *runningOperation;

- (void).cxx_destruct;
- (void)cancel;
- (id)extendedOperation;
- (void)initializeParameters;
- (bool)isProgressIndeterminate;
- (void)runAsynchronouslyWithInput:(id)arg1;
- (id)runningOperation;
- (void)setExtendedOperation:(id)arg1;
- (void)setRunningOperation:(id)arg1;
- (id)voicePickerParameter;

@end
