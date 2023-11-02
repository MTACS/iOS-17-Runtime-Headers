
@interface SGMContactDetailConversationTurn : NSObject {
    PETScalarEventTracker * _tracker;
}

@property (nonatomic, readonly) PETScalarEventTracker *tracker;

- (void).cxx_destruct;
- (id)init;
- (void)trackEventWithScalar:(unsigned long long)arg1 detailExtraction:(struct SGMDetailExtractionType_ { unsigned long long x1; })arg2 selfIdName:(struct SGMTypeSafeBool_ { unsigned long long x1; })arg3 extractionModelVersion:(unsigned long long)arg4 receivedConverstationTurn:(struct SGMTypeSafeBool_ { unsigned long long x1; })arg5 knownSuggestedContactDetail:(struct SGMTypeSafeBool_ { unsigned long long x1; })arg6 curatedContactDetail:(struct SGMTypeSafeBool_ { unsigned long long x1; })arg7 throughApp:(struct SGMContactDetailUsedApp_ { unsigned long long x1; })arg8 contactDetailUsed:(struct SGMContactDetailType_ { unsigned long long x1; })arg9;
- (id)tracker;

@end
