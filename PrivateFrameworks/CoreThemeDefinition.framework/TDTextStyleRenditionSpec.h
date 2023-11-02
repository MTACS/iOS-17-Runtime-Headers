
@interface TDTextStyleRenditionSpec : TDRenditionSpec

@property (nonatomic) short alignment;
@property (nonatomic, retain) TDNamedColorProduction *backgroundColor;
@property (nonatomic, copy) NSString *fontName;
@property (nonatomic) float fontSize;
@property (nonatomic, retain) TDNamedColorProduction *foregroundColor;
@property (nonatomic) float maxPointSize;
@property (nonatomic) float minPointSize;
@property (nonatomic) short scalingStyle;

- (id)createCSIRepresentationWithCompression:(bool)arg1 colorSpaceID:(unsigned long long)arg2 document:(id)arg3;

@end
