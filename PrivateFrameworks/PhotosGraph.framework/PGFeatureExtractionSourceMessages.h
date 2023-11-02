
@interface PGFeatureExtractionSourceMessages : NSObject <PGFeatureExtractionSource>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)extractSharingRecordsFromGraph:(id)arg1 photoLibrary:(id)arg2 loggingConnection:(id)arg3 progressBlock:(id /* block */)arg4;

@end
