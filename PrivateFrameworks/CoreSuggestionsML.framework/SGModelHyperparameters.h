
@interface SGModelHyperparameters : NSObject {
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _characterNGramRange;
    unsigned long long  _extraIdOptions;
    NSString * _featuresModelId;
    NSString * _featuresVersion;
    unsigned long long  _idVectorLength;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _tokenNGramRange;
    unsigned long long  _vectorLength;
    long long  _vectorNormalization;
    unsigned long long  _vectorizerStrategy;
}

@property (nonatomic, readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } characterNGramRange;
@property (nonatomic, readonly) unsigned long long extraIdOptions;
@property (nonatomic, readonly, copy) NSString *featuresModelId;
@property (nonatomic, readonly, copy) NSString *featuresVersion;
@property (nonatomic, readonly) unsigned long long idVectorLength;
@property (nonatomic, readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } tokenNGramRange;
@property (nonatomic, readonly) unsigned long long vectorLength;
@property (nonatomic, readonly) long long vectorNormalization;
@property (nonatomic, readonly) unsigned long long vectorizerStrategy;

+ (unsigned long long)strategyForString:(id)arg1 modelTypeName:(id)arg2;

- (void).cxx_destruct;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })characterNGramRange;
- (unsigned long long)extraIdOptions;
- (id)featuresModelId;
- (id)featuresVersion;
- (unsigned long long)idVectorLength;
- (id)initWithDictionary:(id)arg1 modelTypeName:(id)arg2;
- (id)sessionDescriptorForLanguage:(id)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })tokenNGramRange;
- (unsigned long long)vectorLength;
- (long long)vectorNormalization;
- (unsigned long long)vectorizerStrategy;

@end
