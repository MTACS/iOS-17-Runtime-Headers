
@interface CRFormSelectableFieldOutputRegion : CRFormFieldOutputRegion {
    unsigned long long  _selectableFieldType;
}

@property (readonly) unsigned long long selectableFieldType;

- (id)copyWithZone:(struct _NSZone { }*)arg1 copyChildren:(bool)arg2 copyCandidates:(bool)arg3 deepCopy:(bool)arg4;
- (id)crCodableDataRepresentation;
- (unsigned long long)fieldType;
- (id)initWithCRCodableDataRepresentation:(id)arg1 version:(long long)arg2 offset:(unsigned long long*)arg3;
- (id)initWithQuad:(id)arg1 type:(unsigned long long)arg2 labelRegion:(id)arg3 source:(unsigned long long)arg4;
- (unsigned long long)selectableFieldType;
- (void)setSelectableFieldType:(unsigned long long)arg1;

@end
