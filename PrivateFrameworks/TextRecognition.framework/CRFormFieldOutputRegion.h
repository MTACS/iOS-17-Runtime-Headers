
@interface CRFormFieldOutputRegion : CROutputRegion <CRFormFieldProviding> {
    NSMutableDictionary * _debugInfo;
    unsigned long long  _fieldSource;
    NSString * _fieldValue;
    bool  _hasBoundedHeight;
    bool  _hasBoundedWidth;
    unsigned long long  _indexInGlobalOrder;
    CROutputRegion * _labelRegion;
    <CRFormFieldProviding> * _precedingExternalField;
}

@property bool autofillNewContextStart;
@property (readonly) CRNormalizedQuad *boundingQuad;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long fieldSource;
@property (readonly) unsigned long long fieldType;
@property (readonly, copy) NSString *fieldValue;
@property bool hasBoundedHeight;
@property bool hasBoundedWidth;
@property (readonly) unsigned long long hash;
@property unsigned long long indexInGlobalOrder;
@property (readonly) CROutputRegion *labelRegion;
@property (readonly) unsigned long long layoutDirection;
@property (readonly) unsigned long long maxCharacterCount;
@property double suggestedLineHeight;
@property (readonly) Class superclass;
@property unsigned long long textContentType;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1 copyChildren:(bool)arg2 copyCandidates:(bool)arg3 deepCopy:(bool)arg4;
- (id)crCodableDataRepresentation;
- (id)debugInfo;
- (unsigned long long)fieldSource;
- (unsigned long long)fieldType;
- (id)fieldValue;
- (bool)hasBoundedHeight;
- (bool)hasBoundedWidth;
- (unsigned long long)indexInGlobalOrder;
- (id)initWithCRCodableDataRepresentation:(id)arg1 version:(long long)arg2 offset:(unsigned long long*)arg3;
- (id)initWithQuad:(id)arg1 labelRegion:(id)arg2 subFields:(id)arg3 source:(unsigned long long)arg4;
- (bool)isEqual:(id)arg1;
- (id)labelRegion;
- (id)precedingExternalField;
- (void)setHasBoundedHeight:(bool)arg1;
- (void)setHasBoundedWidth:(bool)arg1;
- (void)setIndexInGlobalOrder:(unsigned long long)arg1;
- (void)setLabelRegion:(id)arg1;
- (void)setPrecedingExternalField:(id)arg1;
- (bool)shouldComputeBoundsFromChildren;
- (unsigned long long)source;
- (unsigned long long)type;

@end
