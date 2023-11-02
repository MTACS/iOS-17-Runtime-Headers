
@interface JFXMediaDataReaderFactory : NSObject

+ (id)sharedInstance;

- (id)createARMetadataReaderWithCreationAttributesProvider:(id)arg1 name:(id)arg2;
- (id)createDepthDataReaderWithCreationAttributesProvider:(id)arg1 name:(id)arg2;

@end
