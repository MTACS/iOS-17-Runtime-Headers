
@interface CRFormAnnotatedField : NSObject <CRFormFieldProviding> {
    CRNormalizedQuad * _boundingQuad;
    unsigned long long  _fieldSource;
    unsigned long long  _fieldType;
    NSString * _fieldValue;
    unsigned long long  _maxCharacterCount;
    CRNormalizedQuad * _originalQuad;
    double  _suggestedLineHeight;
    unsigned long long  _textContentType;
    unsigned long long  layoutDirection;
}

@property bool autofillNewContextStart;
@property (retain) CRNormalizedQuad *boundingQuad;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property unsigned long long fieldSource;
@property unsigned long long fieldType;
@property (copy) NSString *fieldValue;
@property (readonly) bool hasBoundedHeight;
@property (readonly) bool hasBoundedWidth;
@property (readonly) unsigned long long hash;
@property (readonly) unsigned long long layoutDirection;
@property unsigned long long maxCharacterCount;
@property (copy) CRNormalizedQuad *originalQuad;
@property double suggestedLineHeight;
@property (readonly) Class superclass;
@property unsigned long long textContentType;

- (void).cxx_destruct;
- (id)boundingQuad;
- (unsigned long long)contentType;
- (unsigned long long)fieldSource;
- (unsigned long long)fieldType;
- (id)fieldValue;
- (id)initWithQuad:(id)arg1 type:(unsigned long long)arg2 source:(unsigned long long)arg3 value:(id)arg4 contentType:(unsigned long long)arg5 maxCharacterCount:(unsigned long long)arg6;
- (unsigned long long)layoutDirection;
- (unsigned long long)maxCharacterCount;
- (id)originalQuad;
- (id)quad;
- (void)setBoundingQuad:(id)arg1;
- (void)setContentType:(unsigned long long)arg1;
- (void)setFieldSource:(unsigned long long)arg1;
- (void)setFieldType:(unsigned long long)arg1;
- (void)setFieldValue:(id)arg1;
- (void)setMaxCharacterCount:(unsigned long long)arg1;
- (void)setOriginalQuad:(id)arg1;
- (void)setQuad:(id)arg1;
- (void)setSuggestedLineHeight:(double)arg1;
- (void)setTextContentType:(unsigned long long)arg1;
- (double)suggestedLineHeight;
- (unsigned long long)textContentType;

@end
