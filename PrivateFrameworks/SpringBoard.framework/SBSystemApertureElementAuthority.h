
@interface SBSystemApertureElementAuthority : NSObject <SAElementConsidering> {
    <SBSystemApertureElementAuthorityDelegate> * _elementAuthorityDelegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) <SBSystemApertureElementAuthorityDelegate> *elementAuthorityDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)elementAuthorityDelegate;
- (bool)elementRequiresBeingDisplayedAlone:(id)arg1;
- (id)elementsOrderedByPromotionFromTemporallyOrderedElements:(id)arg1 withPreviousOrdering:(id)arg2;
- (void)setElementAuthorityDelegate:(id)arg1;

@end
