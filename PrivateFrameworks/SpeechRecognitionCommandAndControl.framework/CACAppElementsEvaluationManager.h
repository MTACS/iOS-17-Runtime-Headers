
@interface CACAppElementsEvaluationManager : NSObject {
    NSSet * _appIdentifersForStandardFilter;
    NSString * _evaluatorOverrideClassName;
}

+ (id)sharedManager;

- (void).cxx_destruct;
- (id)_trimmedArrayOfActionableAXElements:(id)arg1;
- (id)actionableAXElementsFromAXElements:(id)arg1 forAppIdentifier:(id)arg2;
- (Class)evaluatorClassForAppIdentifier:(id)arg1;
- (id)init;
- (bool)isRecognitionString:(id)arg1 supportedForElement:(id)arg2;

@end
