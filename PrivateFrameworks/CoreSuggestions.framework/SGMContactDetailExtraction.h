
@interface SGMContactDetailExtraction : NSObject {
    PETScalarEventTracker * _tracker;
}

@property (nonatomic, readonly) PETScalarEventTracker *tracker;

- (void).cxx_destruct;
- (id)init;
- (void)trackEventWithScalar:(unsigned long long)arg1 source:(struct SGMDocumentType_ { unsigned long long x1; })arg2 signature:(struct SGMTypeSafeBool_ { unsigned long long x1; })arg3 detail:(struct SGMContactDetailType_ { unsigned long long x1; })arg4 outcome:(struct SGMContactDetailExtractionOutcome_ { unsigned long long x1; })arg5 foundInSenderCNContact:(struct SGMContactDetailOwner_ { unsigned long long x1; })arg6 extractionModelVersion:(unsigned long long)arg7 isUnlikelyPhone:(struct SGMTypeSafeBool_ { unsigned long long x1; })arg8 signatureExtractionSource:(struct SGMContactDetailExtractionSignatureSource_ { unsigned long long x1; })arg9;
- (id)tracker;

@end
