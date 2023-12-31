
@interface TSWPSmartField : TSPObject <TSKDocumentObject, TSPCopying> {
    unsigned long long  _lastTableIndex;
    TSWPStorage * _parentStorage;
}

@property (nonatomic, readonly) unsigned int attributeArrayKind;
@property (nonatomic) TSWPStorage *parentStorage;
@property (nonatomic, readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } range;
@property (nonatomic, readonly) int styleAttributeArrayKind;

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)defaultFieldStyleIdentifier;

- (void)adoptStylesheet:(id)arg1 withMapper:(id)arg2;
- (bool)allowsEditing;
- (bool)allowsPasteAsSmartField;
- (unsigned int)attributeArrayKind;
- (bool)canCopy:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)copyWithContext:(id)arg1;
- (void)dealloc;
- (int)elementKind;
- (id)initWithContext:(id)arg1;
- (id)parentStorage;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })range;
- (void)setParentStorage:(id)arg1;
- (int)styleAttributeArrayKind;
- (id)text;
- (void)wasAddedToDocumentRoot:(id)arg1 context:(id)arg2;
- (void)wasRemovedFromDocumentRoot:(id)arg1;
- (void)willBeAddedToDocumentRoot:(id)arg1 context:(id)arg2;
- (void)willBeRemovedFromDocumentRoot:(id)arg1;

@end
