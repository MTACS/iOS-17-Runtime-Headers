
@interface PKTextInputDebugLogEntry : NSObject {
    NSDate * _entryDate;
    bool  _inputContainsInProgressStroke;
    PKDrawing * _inputDrawing;
    CHTextInputTargetContentInfo * _inputTargetContentInfo;
    NSString * _inputTargetElementType;
    NSArray * _inputTargets;
    NSArray * _recognitionLocaleIdentifiers;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _resultAffectedRange;
    NSString * _resultCommitReason;
    NSString * _resultCommittedText;
    long long  _resultCommittedTokenColumnCount;
    double  _resultRecognitionDuration;
    NSString * _resultTopTranscription;
    NSString * _resultTypeDescription;
    CHTokenizedTextResult * _tokenizedTextResult;
}

@property (nonatomic, retain) NSDate *entryDate;
@property (nonatomic) bool inputContainsInProgressStroke;
@property (nonatomic, retain) PKDrawing *inputDrawing;
@property (nonatomic, retain) CHTextInputTargetContentInfo *inputTargetContentInfo;
@property (nonatomic, copy) NSString *inputTargetElementType;
@property (nonatomic, copy) NSArray *inputTargets;
@property (nonatomic, copy) NSArray *recognitionLocaleIdentifiers;
@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } resultAffectedRange;
@property (nonatomic, copy) NSString *resultCommitReason;
@property (nonatomic, copy) NSString *resultCommittedText;
@property (nonatomic) long long resultCommittedTokenColumnCount;
@property (nonatomic) double resultRecognitionDuration;
@property (nonatomic, copy) NSString *resultTopTranscription;
@property (nonatomic, readonly) long long resultType;
@property (nonatomic, copy) NSString *resultTypeDescription;
@property (nonatomic, retain) CHTokenizedTextResult *tokenizedTextResult;

+ (id)_minimalReferenceString:(id)arg1 rangeOfInterest:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 tokenSearchDistance:(long long)arg3 localeIdentifier:(id)arg4;
+ (id)_mutableDictionaryRepresentationForResultQueryItem:(id)arg1 detailLevel:(long long)arg2;
+ (id)_referenceSubstringForTargetContentInfo:(id)arg1 resultAffectedRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 targetContentLevel:(long long)arg3 localeIdentifier:(id)arg4;
+ (id)loggedDateFormatter;
+ (id)mediumDescriptionForResultQueryItem:(id)arg1;

- (void).cxx_destruct;
- (id)description;
- (id)dictionaryRepresentationWithDetailLevel:(long long)arg1 targetContentLevel:(long long)arg2;
- (id)dictionaryRepresentationWithTargetContentLevel:(long long)arg1;
- (id)entryDate;
- (bool)inputContainsInProgressStroke;
- (id)inputDrawing;
- (id)inputTargetContentInfo;
- (id)inputTargetElementType;
- (id)inputTargets;
- (id)mediumDescription;
- (id)minimalDescription;
- (id)recognitionLocaleIdentifiers;
- (id)referenceSubstringWithTargetContentLevel:(long long)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })resultAffectedRange;
- (id)resultCommitReason;
- (id)resultCommittedText;
- (long long)resultCommittedTokenColumnCount;
- (double)resultRecognitionDuration;
- (id)resultTopTranscription;
- (long long)resultType;
- (id)resultTypeDescription;
- (void)setEntryDate:(id)arg1;
- (void)setInputContainsInProgressStroke:(bool)arg1;
- (void)setInputDrawing:(id)arg1;
- (void)setInputTargetContentInfo:(id)arg1;
- (void)setInputTargetElementType:(id)arg1;
- (void)setInputTargets:(id)arg1;
- (void)setRecognitionLocaleIdentifiers:(id)arg1;
- (void)setResultAffectedRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setResultCommitReason:(id)arg1;
- (void)setResultCommittedText:(id)arg1;
- (void)setResultCommittedTokenColumnCount:(long long)arg1;
- (void)setResultRecognitionDuration:(double)arg1;
- (void)setResultTopTranscription:(id)arg1;
- (void)setResultTypeDescription:(id)arg1;
- (void)setTokenizedTextResult:(id)arg1;
- (id)tokenizedTextResult;

@end
