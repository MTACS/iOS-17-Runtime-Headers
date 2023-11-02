
@interface _CDModeClassifier : NSObject {
    ATXModeClassifier * _modeClassifier;
}

@property (retain) ATXModeClassifier *modeClassifier;

- (void).cxx_destruct;
- (void)_enableFocusModesIfPossible;
- (id)init;
- (id)modeClassifier;
- (void)setModeClassifier:(id)arg1;

@end
