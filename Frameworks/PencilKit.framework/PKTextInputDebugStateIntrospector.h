
@interface PKTextInputDebugStateIntrospector : NSObject {
    <PKTextInputDebugStateIntrospectorDelegate> * _delegate;
    PKTextInputInteraction * _interaction;
}

@property (nonatomic) <PKTextInputDebugStateIntrospectorDelegate> *delegate;
@property (nonatomic, readonly) PKTextInputInteraction *interaction;

+ (id)_knownInstances;
+ (void)debugStateDidChange;
+ (id)debugStateLineDescriptionForIntrospectable:(id)arg1;

- (void).cxx_destruct;
- (void)_debugStateDidChange;
- (id)_introspectableForStateKey:(id)arg1;
- (void)dealloc;
- (bool)debugStateCanShowDetailsForStateKey:(id)arg1;
- (id)debugStateDescriptionForStateKey:(id)arg1;
- (id)debugStateDetailViewControllerForStateKey:(id)arg1;
- (id)debugStateKeys;
- (id)debugStateTitleForStateKey:(id)arg1;
- (id)delegate;
- (id)fullDebugStateDescription;
- (id)initWithInteraction:(id)arg1;
- (id)interaction;
- (void)setDelegate:(id)arg1;

@end
