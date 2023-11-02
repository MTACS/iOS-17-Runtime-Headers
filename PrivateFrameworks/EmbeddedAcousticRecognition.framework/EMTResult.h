
@interface EMTResult : NSObject <NSCopying> {
    NSArray * _alternativeSelectionSpans;
    float  _confidence;
    NSLocale * _locale;
    bool  _lowConfidence;
    NSString * _metaInfo;
    NSString * _romanization;
    NSArray * _tokens;
}

@property (nonatomic, readonly) NSArray *alternativeSelectionSpans;
@property (nonatomic, readonly) float confidence;
@property (nonatomic, readonly) NSLocale *locale;
@property (nonatomic, readonly) bool lowConfidence;
@property (nonatomic, readonly) NSString *metaInfo;
@property (nonatomic, readonly) NSString *romanization;
@property (readonly) double score;
@property (nonatomic, readonly) NSArray *tokens;

// Image: /System/Library/PrivateFrameworks/EmbeddedAcousticRecognition.framework/EmbeddedAcousticRecognition

- (void).cxx_destruct;
- (id)alternativeSelectionSpans;
- (float)confidence;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)initWithLocale:(id)arg1 tokens:(id)arg2 confidence:(float)arg3 lowConfidence:(bool)arg4 metaInfo:(id)arg5 romanization:(id)arg6 alternativeSelectionSpans:(id)arg7;
- (bool)isEqual:(id)arg1;
- (id)locale;
- (bool)lowConfidence;
- (id)metaInfo;
- (id)romanization;
- (id)tokens;

// Image: /System/Library/PrivateFrameworks/NLP.framework/NLP

- (double)score;

// Image: /System/Library/PrivateFrameworks/Transliteration.framework/Transliteration

- (double)score;

@end
