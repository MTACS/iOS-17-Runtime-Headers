
@interface TSWPDrawableAttachment : TSWPAttachment {
    double  _attachmentAnchorY;
    TSDDrawableInfo * _drawableInfo;
    double  _hOffset;
    int  _hOffsetType;
    int  _vAlignment;
    double  _vOffset;
    int  _vOffsetType;
}

@property (nonatomic) double attachmentAnchorY;
@property (nonatomic, readonly) double descent;
@property (nonatomic, readonly, retain) TSDDrawableInfo *drawable;
@property (nonatomic) double hOffset;
@property (nonatomic) int hOffsetType;
@property (nonatomic) int vAlignment;
@property (nonatomic) double vOffset;
@property (nonatomic) int vOffsetType;

+ (void)setPositionerClass:(Class)arg1;

- (void)adoptStylesheet:(id)arg1 withMapper:(id)arg2;
- (void)attachDrawable:(id)arg1;
- (double)attachmentAnchorY;
- (id)copyWithContext:(id)arg1;
- (void)dealloc;
- (double)descent;
- (id)detachDrawable;
- (id)drawable;
- (int)elementKind;
- (unsigned long long)enabledKnobMask;
- (double)hOffset;
- (int)hOffsetType;
- (void)infoChanged;
- (id)init;
- (id)initWithContext:(id)arg1 drawable:(id)arg2;
- (void)invalidate;
- (bool)isAnchored;
- (bool)isDrawable;
- (bool)isEqual:(id)arg1;
- (bool)isHTMLWrap;
- (bool)isPartitioned;
- (bool)isSearchable;
- (Class)positionerClass;
- (void)setAttachmentAnchorY:(double)arg1;
- (void)setHOffset:(double)arg1;
- (void)setHOffsetType:(int)arg1;
- (void)setParentStorage:(id)arg1;
- (void)setVAlignment:(int)arg1;
- (void)setVOffset:(double)arg1;
- (void)setVOffsetType:(int)arg1;
- (bool)specifiesEnabledKnobMask;
- (id)textRepresentationForCopy;
- (id)textStorages;
- (int)vAlignment;
- (double)vOffset;
- (int)vOffsetType;
- (void)wasAddedToDocumentRoot:(id)arg1 context:(id)arg2;
- (void)wasRemovedFromDocumentRoot:(id)arg1;
- (void)willBeAddedToDocumentRoot:(id)arg1 context:(id)arg2;
- (void)willBeRemovedFromDocumentRoot:(id)arg1;

@end
