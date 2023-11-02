
@interface ANAnnouncementStorageManager : NSObject <NSFileManagerDelegate> {
    NSUserDefaults * _defaults;
    NSFileManager * _fileManager;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) NSUserDefaults *defaults;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSFileManager *fileManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedManager;

- (void).cxx_destruct;
- (id)_announcementDataDirectoryForType:(id)arg1 endpointID:(id)arg2 error:(id*)arg3;
- (id)_baseDirectoryURLForEndpointID:(id)arg1 error:(id*)arg2;
- (id)_cachesURLWithError:(id*)arg1;
- (void)_removeAudioDataForAnnouncementID:(id)arg1 endpointID:(id)arg2;
- (void)_removeDirectoryForEndpointsExcludingEndpointIDs:(id)arg1;
- (void)_removeMetadataForAnnouncementID:(id)arg1 endpointID:(id)arg2;
- (id)_saveAudioDataForAnnouncement:(id)arg1 endpointID:(id)arg2;
- (void)_saveMetadataForAnnouncement:(id)arg1 endpointID:(id)arg2;
- (id)defaults;
- (void)deleteAnnouncementWithID:(id)arg1 endpointID:(id)arg2;
- (void)deleteAnnouncementsExcludingAnnouncementsForEndpointIDs:(id)arg1;
- (id)fileManager;
- (bool)fileManager:(id)arg1 shouldProceedAfterError:(id)arg2 removingItemAtURL:(id)arg3;
- (void)removeAnnouncementDataExcludingDataForAnnouncementIDs:(id)arg1 endpointID:(id)arg2;
- (void)saveAnnouncement:(id)arg1 endpointID:(id)arg2;
- (void)setFileManager:(id)arg1;
- (id)storedAnnouncementsForEndpointID:(id)arg1;

@end
