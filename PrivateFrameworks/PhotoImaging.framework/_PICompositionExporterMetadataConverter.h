
@interface _PICompositionExporterMetadataConverter : NSObject <PICompositionExporterMetadataConverter>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)photoFeatureFlags:(id)arg1 error:(id*)arg2;
- (id)photoProcessingFlagsFromProperties:(id)arg1 error:(id*)arg2;
- (bool)setImageVariation:(id)arg1 properties:(id)arg2 error:(id*)arg3;
- (bool)setPhotoFeatureFlags:(id)arg1 properties:(id)arg2 error:(id*)arg3;
- (bool)setPhotoProcessingFlags:(id)arg1 properties:(id)arg2 error:(id*)arg3;
- (id)videoMetadataForVariation:(id)arg1 error:(id*)arg2;

@end
