
@interface TDSimpleArtworkElementProduction : TDElementProduction

@property (nonatomic) short autoscalingType;
@property (nonatomic) bool isFlippable;
@property (nonatomic) bool optOutOfThinning;
@property (nonatomic) bool preservesVectorRepresentation;
@property (nonatomic) bool recognitionImage;
@property (nonatomic, retain) TDTemplateRenderingMode *templateRenderingMode;

- (id)associatedFileModificationDateWithDocument:(id)arg1;
- (void)deleteRenditionsInDocument:(id)arg1 shouldDeleteAssetFiles:(bool)arg2;

@end
