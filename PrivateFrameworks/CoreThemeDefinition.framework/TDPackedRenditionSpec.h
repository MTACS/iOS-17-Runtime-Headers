
@interface TDPackedRenditionSpec : TDRenditionSpec

@property (nonatomic, retain) TDThemeCompressionType *compressionType;

- (id)createCSIRepresentationWithCompression:(bool)arg1 colorSpaceID:(unsigned long long)arg2 document:(id)arg3;
- (id)renditionPackName;

@end
