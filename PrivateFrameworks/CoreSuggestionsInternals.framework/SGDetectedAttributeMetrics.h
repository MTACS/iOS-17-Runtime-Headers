
@interface SGDetectedAttributeMetrics : NSObject {
    PETEventTracker2 * _pet2Tracker;
}

@property (nonatomic, retain) PETEventTracker2 *pet2Tracker;

+ (void)_recordExtractionEventFromSource:(struct SGMDocumentType_ { unsigned long long x1; })arg1 foundInSignature:(bool)arg2 isDDSignature:(bool)arg3 detailType:(struct SGMContactDetailType_ { unsigned long long x1; })arg4 outcome:(struct SGMContactDetailExtractionOutcome_ { unsigned long long x1; })arg5 foundInCNContact:(struct SGMContactDetailOwner_ { unsigned long long x1; })arg6 modelVersion:(id)arg7 isUnlikelyPhone:(bool)arg8 sigSource:(struct SGMContactDetailExtractionSignatureSource_ { unsigned long long x1; })arg9;
+ (void)_recordExtractionOutcome:(struct SGMContactDetailExtractionOutcome_ { unsigned long long x1; })arg1 detailType:(struct SGMContactDetailType_ { unsigned long long x1; })arg2 fromMessage:(id)arg3 foundInSignature:(bool)arg4 isDDSignature:(bool)arg5 detailType:(unsigned long long)arg6 detailValue:(id)arg7 modelVersion:(id)arg8 isUnlikelyPhone:(bool)arg9;
+ (id)instance;
+ (id)nameForDataDetectorMatch:(id)arg1 withValue:(id)arg2;
+ (void)recordBirthdayExtractionAccuracy:(unsigned char)arg1 withOffset:(id)arg2 withModelVersion:(id)arg3 isFromCongratulation:(unsigned char)arg4 didRegexTrigger:(unsigned char)arg5 didResponseKitTrigger:(unsigned char)arg6;
+ (void)recordExtractionOutcome:(struct SGMContactDetailExtractionOutcome_ { unsigned long long x1; })arg1 forDetectionsInMessage:(id)arg2 signatureRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 isDDSignature:(bool)arg4;
+ (void)recordExtractionOutcome:(struct SGMContactDetailExtractionOutcome_ { unsigned long long x1; })arg1 fromMessage:(id)arg2 foundInSignature:(bool)arg3 isDDSignature:(bool)arg4 detection:(id)arg5;
+ (void)recordExtractionOutcome:(struct SGMContactDetailExtractionOutcome_ { unsigned long long x1; })arg1 fromMessage:(id)arg2 foundInSignature:(bool)arg3 isDDSignature:(bool)arg4 match:(id)arg5 foundInCNContact:(struct SGMContactDetailOwner_ { unsigned long long x1; })arg6 modelVersion:(id)arg7 isUnlikelyPhone:(bool)arg8;
+ (void)recordExtractionOutcome:(struct SGMContactDetailExtractionOutcome_ { unsigned long long x1; })arg1 fromMessage:(id)arg2 foundInSignature:(bool)arg3 isDDSignature:(bool)arg4 match:(id)arg5 modelVersion:(id)arg6 isUnlikelyPhone:(bool)arg7;
+ (void)recordSelfIdModelScore:(bool)arg1 model:(int)arg2 supervision:(int)arg3;
+ (void)recordSentContactDetailWithMessage:(id)arg1 match:(id)arg2 found:(struct SGMContactDetailFoundIn_ { unsigned long long x1; })arg3;
+ (id)tokenizeMessageContent:(id)arg1;

- (void).cxx_destruct;
- (id)initWithTracker:(id)arg1;
- (id)pet2Tracker;
- (void)setPet2Tracker:(id)arg1;

@end
