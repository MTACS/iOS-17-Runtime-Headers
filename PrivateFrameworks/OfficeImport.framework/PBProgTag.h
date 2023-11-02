
@interface PBProgTag : NSObject

+ (id)binaryTagDataWithName:(const unsigned short*)arg1 inProgTags:(id)arg2;
+ (id)binaryTagDataWithName:(const unsigned short*)arg1 inProgTagsParent:(id)arg2;
+ (id)ensureBinaryTagDataWithName:(const unsigned short*)arg1 inProgTags:(id)arg2;
+ (id)ensureBinaryTagDataWithName:(const unsigned short*)arg1 inProgTagsParent:(id)arg2;
+ (void)readBulletImagesFromContainerParent:(id)arg1 state:(id)arg2;
+ (void)readBulletImagesFromDocumentList:(id)arg1 state:(id)arg2;
+ (id)readBulletStyleFromClientData:(id)arg1;
+ (void)readBulletStylesFromDocumentList:(id)arg1 state:(id)arg2;
+ (void)readBulletStylesFromMainMaster:(id)arg1 state:(id)arg2;
+ (void)readClientData:(id)arg1 state:(id)arg2;
+ (void)readDocumentList:(id)arg1 state:(id)arg2;
+ (void)readHyperlinkScreenTipsFromDocumentList:(id)arg1 state:(id)arg2;
+ (id)readMacCharStyleFromClientData:(id)arg1;
+ (void)readMacCharStylesFromDocumentList:(id)arg1 state:(id)arg2;
+ (const struct PBTextFormatProgTagInfo { unsigned short *x1; unsigned short x2; unsigned short x3; unsigned short x4; unsigned short x5; }*)textFormatInfoForProgTagName:(const unsigned short*)arg1;

@end
