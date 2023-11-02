
@interface _LTDisambiguationNode : NSObject <NSCopying, NSSecureCoding> {
    NSArray * _links;
    NSString * _text;
}

@property (nonatomic, readonly) NSArray *links;
@property (nonatomic, readonly) NSString *text;

// Image: /System/Library/PrivateFrameworks/Translation.framework/Translation

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_insertPrefix:(id)arg1;
- (void)_removeAllLinks;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithText:(id)arg1 links:(id)arg2;
- (id)links;
- (id)text;

// Image: /System/Library/PrivateFrameworks/TranslationDaemon.framework/TranslationDaemon

+ (id)_nodeWithText:(id)arg1 links:(id)arg2 numberOfSelectionSpans:(unsigned long long)arg3;
+ (id)nodeFromEMTResult:(id)arg1 sourceText:(id)arg2;
+ (id)nodeFromFTSpeechTranslationPhrase:(id)arg1 descriptions:(id)arg2 sourceText:(id)arg3 censorSpeech:(bool)arg4;
+ (id)nodeFromFTTranslationPhrase:(id)arg1 descriptions:(id)arg2 sourceText:(id)arg3;
+ (id)nodeFromOspreyBatchPhrase:(id)arg1 descriptions:(id)arg2 sourceText:(id)arg3;
+ (id)nodeWithText:(id)arg1;

@end
