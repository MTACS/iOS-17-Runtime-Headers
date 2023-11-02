
@interface UIDictationSerializableResults : NSObject <NSCopying, NSSecureCoding> {
    bool  _addTrailingSpace;
    bool  _allowsAlternatives;
    bool  _fromKeyboard;
    NSIndexPath * _indexPathOfInterpretations;
    bool  _isFinalResult;
    bool  _lowConfidenceAboutLanguageDetection;
    NSArray * _multilingualAlternatives;
    NSArray * _phrases;
    bool  _showMultilingualAlternatives;
    struct __CFString { } * _transform;
    bool  _useServerCapitalization;
}

@property (nonatomic) bool addTrailingSpace;
@property (nonatomic, readonly) bool allowsAlternatives;
@property (nonatomic) bool fromKeyboard;
@property (nonatomic, retain) NSIndexPath *indexPathOfInterpretations;
@property (nonatomic) bool isFinalResult;
@property (nonatomic) bool lowConfidenceAboutLanguageDetection;
@property (nonatomic, copy) NSArray *multilingualAlternatives;
@property (nonatomic, copy) NSArray *phrases;
@property (nonatomic) bool showMultilingualAlternatives;
@property (nonatomic) struct __CFString { }*transform;
@property (nonatomic) bool useServerCapitalization;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)addTrailingSpace;
- (bool)allowsAlternatives;
- (id)bestResults;
- (id)bestText;
- (id)bestTextArray;
- (id)bestTextArrayForAlternatives:(id)arg1;
- (id)bestTextForMultilingualAlternatives;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictationPhraseArray;
- (void)encodeWithCoder:(id)arg1;
- (bool)fromKeyboard;
- (id)indexPathOfInterpretations;
- (id)init;
- (id)initWithArrayOfArrayOfStrings:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDetectedPhrases:(id)arg1 multilingualAlternatives:(id)arg2;
- (id)initWithPhrases:(id)arg1;
- (bool)isFinalResult;
- (bool)lowConfidenceAboutLanguageDetection;
- (id)multilingualAlternatives;
- (id)multilingualResultsByLanguageCode;
- (id)phrases;
- (id)secondBestText;
- (id)secondBestTextArray;
- (void)setAddTrailingSpace:(bool)arg1;
- (void)setFromKeyboard:(bool)arg1;
- (void)setIndexPathOfInterpretations:(id)arg1;
- (void)setIsFinalResult:(bool)arg1;
- (void)setLowConfidenceAboutLanguageDetection:(bool)arg1;
- (void)setMultilingualAlternatives:(id)arg1;
- (void)setPhrases:(id)arg1;
- (void)setShowMultilingualAlternatives:(bool)arg1;
- (void)setTransform:(struct __CFString { }*)arg1;
- (void)setUseServerCapitalization:(bool)arg1;
- (bool)showMultilingualAlternatives;
- (id)singleLineResult;
- (id)text;
- (id)textArray;
- (id)textArrayForAlternatives:(id)arg1;
- (struct __CFString { }*)transform;
- (bool)useServerCapitalization;

@end
