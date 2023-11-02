
@interface PBPresentation : NSObject

+ (void)addHeadersFootersToDocumentContainer:(id)arg1 instance:(int)arg2;
+ (id)drawingGroupHolderWithDocumentContainerHolder:(id)arg1;
+ (void)processLayoutTypesFromDocument:(id)arg1 masterLayoutMap:(id)arg2 state:(id)arg3;
+ (void)readCommentAuthorsFrom:(id)arg1 state:(id)arg2;
+ (void)readDefaultTextListStyle:(id)arg1 fromDocumentContainer:(id)arg2 state:(id)arg3;
+ (void)readFrom:(void*)arg1 to:(id)arg2 cancel:(id)arg3 asThumbnail:(bool)arg4 delegate:(id)arg5;
+ (void)readMasterAndLayouts:(id)arg1 masterLayoutMap:(id)arg2 state:(id)arg3;
+ (void)readNotes:(id)arg1 masterLayoutMap:(id)arg2 slideIdMap:(id)arg3 state:(id)arg4 delegate:(id)arg5;
+ (void)readSlideListWithInstance:(int)arg1 documentContainerHolder:(id)arg2 state:(id)arg3 block:(id /* block */)arg4;
+ (void)readSlides:(id)arg1 masterLayoutMap:(id)arg2 slideIdMap:(id)arg3 state:(id)arg4 isThumbnail:(bool)arg5 delegate:(id)arg6;
+ (void)readTextStyleFromNotesMaster:(id)arg1 toNotesMaster:(id)arg2 slideMaster:(id)arg3 state:(id)arg4;
+ (void)readTextStylesFromSlideMaster:(id)arg1 toSlideMaster:(id)arg2 state:(id)arg3;
+ (void)readThemeFromSlideMaster:(id)arg1 document:(id)arg2 theme:(id)arg3 colorMap:(id)arg4 state:(id)arg5;
+ (void)readXmlLayoutsFromSlideMaster:(id)arg1 document:(id)arg2 masterInfo:(id)arg3 state:(id)arg4;
+ (void)scanSlideListForLayoutTypes:(id)arg1 slideListHolder:(id)arg2 masterLayoutMap:(id)arg3;
+ (void)setDefaultTextStyleWithEnvironmentHolder:(id)arg1 state:(id)arg2;
+ (void)setFontEntites:(id)arg1 environmentHolder:(id)arg2;

@end
