
@interface CHStrokeGroupRecognitionResult : NSObject <NSCopying, NSSecureCoding> {
    NSDictionary * _errorsByLocale;
    CHDrawing * _inputDrawing;
    NSArray * _inputDrawingCutPoints;
    NSArray * _inputStrokeIdentifiers;
    NSDictionary * _languageFitnessByLocale;
    NSArray * _orderedLocales;
    NSDictionary * _recognitionResultsByLocale;
}

@property (nonatomic, readonly, copy) NSDictionary *errorsByLocale;
@property (nonatomic, readonly) CHDrawing *inputDrawing;
@property (nonatomic, readonly, copy) NSArray *inputDrawingCutPoints;
@property (nonatomic, readonly, copy) NSArray *inputStrokeIdentifiers;
@property (nonatomic, readonly, copy) NSDictionary *languageFitnessByLocale;
@property (nonatomic, readonly, copy) NSDictionary *recognitionResultsByLocale;

+ (id)filteredResultsByLocale:(id)arg1 orderedLocales:(id)arg2 usingLanguageFitness:(id)arg3 outSortedLocales:(id*)arg4;
+ (id)sortedLanguageGroups:(id)arg1 usingLanguageFitness:(id)arg2;
+ (id)sortedLocales:(id)arg1 usingLanguageFitness:(id)arg2 useCombinedScore:(bool)arg3;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)errorsByLocale;
- (id)highConfidenceTextForSessionResult:(id)arg1 rejectionRate:(double*)arg2 doesContainUnfilteredMultiLocaleResults:(bool*)arg3;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithOrderedLocales:(id)arg1 resultsByLocale:(id)arg2 errorsByLocale:(id)arg3 languageFitnessByLocale:(id)arg4 inputStrokeIdentifiers:(id)arg5;
- (id)initWithOrderedLocales:(id)arg1 resultsByLocale:(id)arg2 errorsByLocale:(id)arg3 languageFitnessByLocale:(id)arg4 inputStrokeIdentifiers:(id)arg5 inputDrawing:(id)arg6 inputDrawingCutPoints:(id)arg7;
- (id)inputDrawing;
- (id)inputDrawingCutPoints;
- (id)inputStrokeIdentifiers;
- (bool)isEqual:(id)arg1;
- (id)languageFitnessByLocale;
- (struct { double x1; double x2; })languageFitnessForLocale:(id)arg1;
- (id)localesSortedByCombinedLanguageFitness:(id)arg1;
- (id)localesSortedByRawLanguageFitness:(id)arg1;
- (id)preferredLocale;
- (id)recognitionResultsByLocale;

@end
