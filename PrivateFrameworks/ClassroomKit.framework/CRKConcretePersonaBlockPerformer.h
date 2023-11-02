
@interface CRKConcretePersonaBlockPerformer : NSObject <CRKPersonaBlockPerforming>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)adoptPersonaWithUniqueString:(id)arg1 andPerformBlock:(id /* block */)arg2;
- (id)currentPersona;

@end
