
@interface TDSchemaElementProduction : TDSimpleArtworkElementProduction

@property (nonatomic, retain) NSString *folderName;
@property (nonatomic, retain) NSOrderedSet *slices;

- (id)associatedFileURLWithDocument:(id)arg1;
- (void)generateNewRendition;
- (id)relativePath;

@end
