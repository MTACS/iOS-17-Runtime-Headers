
@interface OCXState : NSObject {
    CXNamespace * mOCXDrawingNamespace;
    CXNamespace * mOCXRelationshipsNamespace;
    int  mXMLFormat;
}

@property (nonatomic, retain) CXNamespace *OCXDrawingNamespace;
@property (nonatomic, retain) CXNamespace *OCXRelationshipsNamespace;
@property (nonatomic, readonly) int xmlFormat;

- (void).cxx_destruct;
- (id)OCXCommentAuthorsRelationshipType;
- (id)OCXCommentsExtendedRelationshipType;
- (id)OCXCommentsRelationshipType;
- (id)OCXCustomXmlRelationshipType;
- (id)OCXDrawingNamespace;
- (id)OCXDrawingRelationshipType;
- (id)OCXEndnotesRelationshipType;
- (id)OCXFontTableRelationshipType;
- (id)OCXFootnotesRelationshipType;
- (id)OCXLegacyDocTextInfoRelationshipType;
- (id)OCXNotesMasterRelationshipType;
- (id)OCXNotesSlideRelationshipType;
- (id)OCXNumberingRelationshipType;
- (id)OCXPackagePresPropsRelationshipType;
- (id)OCXPackageViewPropsRelationshipType;
- (id)OCXPivotTableRelationshipType;
- (id)OCXRelationshipsNamespace;
- (id)OCXSettingsRelationshipType;
- (id)OCXSharedStringsRelationshipType;
- (id)OCXSlideLayoutRelationshipType;
- (id)OCXSlideMasterRelationshipType;
- (id)OCXSlideRelationshipType;
- (id)OCXStylesRelationshipType;
- (id)OCXTableRelationshipType;
- (id)OCXTableStylesRelationshipType;
- (id)OCXThemeOverrideRelationshipType;
- (id)OCXThemeRelationshipType;
- (id)OCXVmlDrawingRelationshipType;
- (id)init;
- (void)setOCXDrawingNamespace:(id)arg1;
- (void)setOCXRelationshipsNamespace:(id)arg1;
- (void)setXmlFormat:(int)arg1;
- (void)setupNSForXMLFormat:(int)arg1;
- (int)xmlFormat;

@end
