
@interface CARZipArchiver : NSObject <CARArchiving>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (bool)archiveDirectory:(id)arg1 toLocation:(id)arg2;
- (bool)unarchive:(id)arg1 toLocation:(id)arg2;

@end
