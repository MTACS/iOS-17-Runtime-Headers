
@interface SWInteractionFactory : NSObject <SWInteractionFactory> {
    <SWNavigationManager> * _navigationManager;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <SWNavigationManager> *navigationManager;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithNavigationManager:(id)arg1;
- (id)interactionForDictionary:(id)arg1;
- (id)navigationManager;

@end
