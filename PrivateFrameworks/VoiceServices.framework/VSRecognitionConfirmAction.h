
@interface VSRecognitionConfirmAction : VSRecognitionRecognizeAction {
    struct { 
        unsigned int initializing : 1; 
        unsigned int confirmed : 1; 
    }  _confirmFlags;
    VSRecognitionAction * _confirmedAction;
    VSRecognitionAction * _deniedAction;
}

- (void)_setConfirmed:(bool)arg1;
- (int)completionType;
- (id)confirmedAction;
- (void)dealloc;
- (id)deniedAction;
- (id)init;
- (id)initWithModelIdentifier:(id)arg1;
- (void)setConfirmedAction:(id)arg1;
- (void)setDeniedAction:(id)arg1;

@end
