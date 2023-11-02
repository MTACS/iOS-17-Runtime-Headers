
@interface _LTDisambiguableResult : NSObject <NSCopying, NSSecureCoding, _LTDisambiguableSentenceDelegate> {
    <_LTDisambiguableResultDelegate> * _delegate;
    NSHashTable * _observers;
    NSArray * _sentences;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <_LTDisambiguableResultDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasDisambiguations;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSArray *observers;
@property (nonatomic, readonly, copy) NSArray *sentences;
@property (nonatomic, readonly, copy) NSString *sourceText;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *targetText;

// Image: /System/Library/PrivateFrameworks/Translation.framework/Translation

+ (id)combineResults:(id)arg1 joinedWithString:(id)arg2;
+ (id)combinedDisambiguableResultFromTranslationResults:(id)arg1 joinedWithString:(id)arg2;
+ (bool)isGenderDisambiguationEnabled;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_commonInit;
- (void)_insertPrefix:(id)arg1;
- (void)addObserver:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)delegate;
- (id)description;
- (void)disambiguableSentence:(id)arg1 didSelectNode:(id)arg2 atIndex:(unsigned long long)arg3 withSelection:(id)arg4;
- (void)encodeWithCoder:(id)arg1;
- (id)excludedTypesForDisambiguableSentence:(id)arg1;
- (id)generateAttributedStringForLocation:(unsigned long long)arg1 withGlobalAttributes:(id)arg2 attributeProvider:(id /* block */)arg3;
- (bool)hasDisambiguations;
- (bool)hasDisambiguationsOfType:(unsigned long long)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithSentences:(id)arg1;
- (id)initWithSentences:(id)arg1 joinedWithString:(id)arg2;
- (id)observers;
- (void)removeObserver:(id)arg1;
- (id)sentenceWithUUID:(id)arg1;
- (id)sentences;
- (void)setDelegate:(id)arg1;
- (id)sourceText;
- (id)targetText;

// Image: /System/Library/PrivateFrameworks/TranslationDaemon.framework/TranslationDaemon

+ (id)_resultWithSentence:(id)arg1;
+ (id)_resultWithSentences:(id)arg1;
+ (id)resultFromFTSpeechResponse:(id)arg1 sourceText:(id)arg2 censorSpeech:(bool)arg3;
+ (id)resultFromOspreyBatchResponse:(id)arg1 sourceText:(id)arg2;
+ (id)resultFromOspreyResponse:(id)arg1;

@end
