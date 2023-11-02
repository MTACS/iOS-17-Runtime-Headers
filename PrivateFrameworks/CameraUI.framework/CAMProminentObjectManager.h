
@interface CAMProminentObjectManager : NSObject {
    <CAMMetadataObjectResult> * _candidateObject;
    double  _candidateTimestamp;
    BCSAction * _currentAction;
    <CAMMetadataObjectResult> * _currentObject;
    struct CGPoint { 
        double x; 
        double y; 
    }  _currentObjectPointOfInterest;
    BCSDetectedCode * _currentlyParsingCode;
    <CAMProminentObjectManagerDelegate> * _delegate;
    <CAMMetadataObjectResult> * _expiringObject;
    BCSAction * _previousAction;
    long long  _viewportAspectRatio;
}

@property (nonatomic, readonly) BCSAction *currentMachineReadableCodeAction;
@property (nonatomic, readonly) <CAMMetadataObjectResult> *currentObject;
@property (getter=isCurrentObjectExpiring, nonatomic, readonly) bool currentObjectExpiring;
@property (nonatomic, readonly) unsigned long long currentObjectType;
@property (nonatomic) <CAMProminentObjectManagerDelegate> *delegate;
@property (nonatomic) long long viewportAspectRatio;

- (void).cxx_destruct;
- (void)_beginExpiringCurrentObjectIfNeeded;
- (id)_candidateObjectMatchingCurrentObject:(id)arg1;
- (double)_expirationTimeForObjectType:(unsigned long long)arg1;
- (void)_handleExpiredObject:(id)arg1;
- (bool)_isMetadataObject:(id)arg1 semanticallyEqualToMetadataObject:(id)arg2;
- (bool)_isPoint:(struct CGPoint { double x1; double x2; })arg1 equalToPoint:(struct CGPoint { double x1; double x2; })arg2 tolerance:(double)arg3;
- (id)_mostSignificantObjectFromObjects:(id)arg1 preferredObject:(id)arg2 pointOfInterest:(struct CGPoint { double x1; double x2; })arg3;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_referenceBoundsForAspectRatio:(long long)arg1;
- (double)_selectionDelayForNewObject:(id)arg1;
- (void)_setCurrentMachineReadableCodeAction:(id)arg1;
- (void)_setCurrentMachineReadableCodeAction:(id)arg1 updatePreviousAction:(bool)arg2;
- (void)_setCurrentObject:(id)arg1 forPointOfInterest:(struct CGPoint { double x1; double x2; })arg2;
- (void)_updateCurrentMRCActionWhenReady;
- (id)currentMachineReadableCodeAction;
- (id)currentObject;
- (unsigned long long)currentObjectType;
- (id)delegate;
- (id)init;
- (bool)isCurrentObjectExpiring;
- (bool)isCurrentObjectLikelyEqualToObject:(id)arg1;
- (void)reset;
- (void)setDelegate:(id)arg1;
- (void)setViewportAspectRatio:(long long)arg1;
- (unsigned long long)typeForMetadataObject:(id)arg1;
- (void)updateWithCandidateObjects:(id)arg1;
- (long long)viewportAspectRatio;

@end
