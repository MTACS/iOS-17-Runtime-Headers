
@interface WDAnnotation : WDRun {
    bool  isResolved;
    WDAnnotationData * mData;
    WDAnnotation * mOtherEndOfRangedAnnotation;
    WDCharacterRun * mReference;
    bool  mReferencePopertiesFixed;
    int  mType;
    WDAnnotation * parent;
}

@property bool isResolved;
@property WDAnnotation *parent;

- (void).cxx_destruct;
- (int)annotationType;
- (id)data;
- (id)date;
- (id)description;
- (id)initWithParagraph:(id)arg1 type:(int)arg2;
- (bool)isResolved;
- (unsigned long long)lastParagraphId;
- (id)otherEndOfRangedAnnotation;
- (id)owner;
- (id)paragraphIds;
- (id)parent;
- (id)reference;
- (bool)referencePropertiesFixed;
- (int)runType;
- (void)setDate:(id)arg1;
- (void)setIsResolved:(bool)arg1;
- (void)setOtherEndOfRangedAnnotation:(id)arg1;
- (void)setOwner:(id)arg1;
- (void)setParent:(id)arg1;
- (void)setReferencePropertiesFixed;
- (id)text;
- (void)useDataFromOtherEnd;

@end
