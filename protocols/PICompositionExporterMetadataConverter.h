
@protocol PICompositionExporterMetadataConverter <NSObject>

@required

- (NSNumber *)photoFeatureFlags:(NSDictionary *)arg1 error:(id*)arg2;
- (NSNumber *)photoProcessingFlagsFromProperties:(NSDictionary *)arg1 error:(id*)arg2;
- (bool)setImageVariation:(id)arg1 properties:(NSMutableDictionary *)arg2 error:(id*)arg3;
- (bool)setPhotoFeatureFlags:(NSNumber *)arg1 properties:(NSMutableDictionary *)arg2 error:(id*)arg3;
- (bool)setPhotoProcessingFlags:(NSNumber *)arg1 properties:(NSMutableDictionary *)arg2 error:(id*)arg3;
- (NSArray *)videoMetadataForVariation:(id)arg1 error:(id*)arg2;

@end
