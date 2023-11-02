
@interface PKTextInputElementsController : NSObject <PKTextInputDebugStateReporting> {
    UIView * _containerView;
    <PKTextInputElementsControllerDelegate> * _delegate;
    long long  _finderGenerationCounter;
    long long  _finderGenerationOfLastDiscoveredElements;
    NSDictionary * _lastDiscoveredElementsByUniqueID;
    double  _lastDiscoveredElementsUpdateTime;
    long long  _nextElementRecognitionIdentifierIndex;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)reportDebugStateDescription:(id /* block */)arg1;

@end
