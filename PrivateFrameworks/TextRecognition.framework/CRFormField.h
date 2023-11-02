
@interface CRFormField : NSObject <CRFormFieldProviding> {
    CRNormalizedQuad * _boundingQuad;
    unsigned long long  _fieldSource;
    unsigned long long  _fieldType;
    NSString * _fieldValue;
    bool  _hasBoundedHeight;
    bool  _hasBoundedWidth;
    unsigned long long  _maxCharacterCount;
    CRNormalizedQuad * _originalQuad;
    double  _suggestedLineHeight;
    unsigned long long  _textContentType;
    unsigned long long  layoutDirection;
}

@property bool autofillNewContextStart;
@property (readonly) CRNormalizedQuad *boundingQuad;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property unsigned long long fieldSource;
@property unsigned long long fieldType;
@property (copy) NSString *fieldValue;
@property bool hasBoundedHeight;
@property bool hasBoundedWidth;
@property (readonly) bool hasMoved;
@property (readonly) unsigned long long hash;
@property (readonly) unsigned long long layoutDirection;
@property unsigned long long maxCharacterCount;
@property (copy) CRNormalizedQuad *originalQuad;
@property double suggestedLineHeight;
@property (readonly) Class superclass;
@property unsigned long long textContentType;

- (void).cxx_destruct;
- (id)boundingQuad;
- (unsigned long long)fieldSource;
- (unsigned long long)fieldType;
- (id)fieldValue;
- (bool)hasBoundedHeight;
- (bool)hasBoundedWidth;
- (bool)hasMoved;
- (id)initWithQuad:(id)arg1 type:(unsigned long long)arg2 source:(unsigned long long)arg3 value:(id)arg4 contentType:(unsigned long long)arg5 maxCharacterCount:(unsigned long long)arg6;
- (bool)isEqual:(id)arg1;
- (unsigned long long)layoutDirection;
- (unsigned long long)maxCharacterCount;
- (id)originalQuad;
- (void)setFieldSource:(unsigned long long)arg1;
- (void)setFieldType:(unsigned long long)arg1;
- (void)setFieldValue:(id)arg1;
- (void)setHasBoundedHeight:(bool)arg1;
- (void)setHasBoundedWidth:(bool)arg1;
- (void)setMaxCharacterCount:(unsigned long long)arg1;
- (void)setOriginalQuad:(id)arg1;
- (void)setSuggestedLineHeight:(double)arg1;
- (void)setTextContentType:(unsigned long long)arg1;
- (double)suggestedLineHeight;
- (unsigned long long)textContentType;

@end
