
@interface DTFileBrowserService : DTXService <DTFileBrowserServiceAuthorizedAPI>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)registerCapabilities:(id)arg1;

- (id)contentsOfDirectoryAtPath:(id)arg1;
- (id)dataFromFileAtPath:(id)arg1;
- (id)entriesAtPath:(id)arg1;
- (id)entriesInPathsArray:(id)arg1;
- (id)fileExistsAtPath:(id)arg1;
- (id)updateAttributesForItem:(id)arg1;

@end
