
@interface VKCFormRegion : NSObject {
    bool  _autofillNewContextStart;
    NSArray * _children;
    unsigned long long  _contentType;
    unsigned long long  _fieldSource;
    unsigned long long  _fieldType;
    long long  _maxCharacterCount;
    VKQuad * _quad;
    double  _suggestedLineHeight;
}

@property (nonatomic, readonly) NSString *autoFillContentType;
@property (nonatomic) bool autofillNewContextStart;
@property (nonatomic, retain) NSArray *children;
@property (nonatomic) unsigned long long contentType;
@property (nonatomic) unsigned long long fieldSource;
@property (nonatomic) unsigned long long fieldType;
@property (nonatomic) long long maxCharacterCount;
@property (nonatomic, retain) VKQuad *quad;
@property (nonatomic, readonly) unsigned long long regionType;
@property (nonatomic) double suggestedLineHeight;

+ (id)autoFillContentTypeForCRContentType:(unsigned long long)arg1;

- (void).cxx_destruct;
- (id)autoFillContentType;
- (bool)autofillNewContextStart;
- (id)children;
- (unsigned long long)contentType;
- (id)crFormFieldWithSize:(struct CGSize { double x1; double x2; })arg1;
- (id)debugDescription;
- (unsigned long long)fieldSource;
- (unsigned long long)fieldType;
- (id)initWithSourceRegion:(id)arg1;
- (long long)maxCharacterCount;
- (id)quad;
- (unsigned long long)regionType;
- (void)setAutofillNewContextStart:(bool)arg1;
- (void)setChildren:(id)arg1;
- (void)setContentType:(unsigned long long)arg1;
- (void)setFieldSource:(unsigned long long)arg1;
- (void)setFieldType:(unsigned long long)arg1;
- (void)setMaxCharacterCount:(long long)arg1;
- (void)setQuad:(id)arg1;
- (void)setSuggestedLineHeight:(double)arg1;
- (double)suggestedLineHeight;

@end
