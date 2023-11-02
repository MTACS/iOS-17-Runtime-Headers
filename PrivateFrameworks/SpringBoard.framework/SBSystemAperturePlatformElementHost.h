
@interface SBSystemAperturePlatformElementHost : NSObject <SBSystemAperturePlatformElementHosting> {
    <SBSystemApertureDynamicsHandling><SBSystemAperturePlatformElementHostingDelegate> * _delegate;
    <SBSystemApertureElement> * _element;
    NSMapTable * _reasonsToUrgencyAssertions;
    <SAInvalidatable> * _urgentAndImportantAssertion;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <SAInvalidatable> *urgentAndImportantAssertion;

- (void).cxx_destruct;
- (id)_urgencyAssertionWithReason:(id)arg1 creatingIfNecessary:(bool)arg2;
- (void)elementRequestsDiscreteAnimationOfType:(long long)arg1;
- (id)elementRequestsPersistentAnimationOfType:(long long)arg1;
- (id)initWithElement:(id)arg1 delegate:(id)arg2;
- (id)requestUrgentAndImportantPriorityWithReason:(id)arg1;
- (id)urgentAndImportantAssertion;

@end
