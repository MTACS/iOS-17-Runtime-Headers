
@interface CRFormTextFieldOutputRegion : CRFormFieldOutputRegion {
    bool  _autofillNewContextStart;
    unsigned long long  _maxCharacterCount;
    double  _suggestedLineHeight;
    unsigned long long  _textContentType;
}

@property (readonly) bool autofillNewContextStart;
@property (readonly) unsigned long long maxCharacterCount;
@property (readonly) double suggestedLineHeight;
@property (readonly) unsigned long long textContentType;

- (bool)autofillNewContextStart;
- (id)copyWithZone:(struct _NSZone { }*)arg1 copyChildren:(bool)arg2 copyCandidates:(bool)arg3 deepCopy:(bool)arg4;
- (id)crCodableDataRepresentation;
- (unsigned long long)fieldType;
- (id)initWithCRCodableDataRepresentation:(id)arg1 version:(long long)arg2 offset:(unsigned long long*)arg3;
- (id)initWithQuad:(id)arg1 labelRegion:(id)arg2 subFields:(id)arg3 contentType:(unsigned long long)arg4 source:(unsigned long long)arg5;
- (id)initWithQuad:(id)arg1 labelRegion:(id)arg2 subFields:(id)arg3 contentType:(unsigned long long)arg4 source:(unsigned long long)arg5 hasBoundedWidth:(bool)arg6 hasBoundedHeight:(bool)arg7;
- (bool)isEqual:(id)arg1;
- (unsigned long long)maxCharacterCount;
- (void)setAutofillNewContextStart:(bool)arg1;
- (void)setMaxCharacterCount:(unsigned long long)arg1;
- (void)setSuggestedLineHeight:(double)arg1;
- (void)setTextContentType:(unsigned long long)arg1;
- (double)suggestedLineHeight;
- (unsigned long long)textContentType;

@end
