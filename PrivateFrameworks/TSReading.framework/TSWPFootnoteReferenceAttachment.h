
@interface TSWPFootnoteReferenceAttachment : TSWPTextualAttachment {
    TSWPStorage * _containedStorage;
    NSString * _customMarkString;
}

@property (nonatomic, retain) TSWPStorage *containedStorage;
@property (nonatomic, retain) NSString *customMarkString;

- (void)adoptStylesheet:(id)arg1 withMapper:(id)arg2;
- (void)applyMark;
- (void)checkDebug;
- (id)containedStorage;
- (id)copyWithContext:(id)arg1;
- (id)customMarkString;
- (void)dealloc;
- (int)elementKind;
- (unsigned long long)findCharIndex;
- (id)initWithContext:(id)arg1;
- (id)initWithContext:(id)arg1 wpStorage:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isSearchable;
- (void)setContainedStorage:(id)arg1;
- (void)setContainedStorageParentInfoToStorage:(id)arg1;
- (void)setCustomMarkString:(id)arg1;
- (void)setParentStorage:(id)arg1;
- (id)stringEquivalent;
- (void)wasAddedToDocumentRoot:(id)arg1 context:(id)arg2;
- (void)wasRemovedFromDocumentRoot:(id)arg1;
- (void)willBeAddedToDocumentRoot:(id)arg1 context:(id)arg2;
- (void)willBeRemovedFromDocumentRoot:(id)arg1;

@end
