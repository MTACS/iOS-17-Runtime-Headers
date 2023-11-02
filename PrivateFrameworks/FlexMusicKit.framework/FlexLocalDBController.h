
@interface FlexLocalDBController : NSObject {
    NSManagedObjectContext * _backgroundContext;
    NSURL * _destinationURL;
    NSPersistentContainer * _localSongDatabase;
}

@property (nonatomic, readonly) NSArray *allSongEntries;
@property (nonatomic, retain) NSDate *lastCloudCheckDate;

- (void).cxx_destruct;
- (void)_insertFirstCloudCheckDate:(id)arg1 andSave:(bool)arg2;
- (id)allSongEntries;
- (bool)createSongEntryWithSongData:(id)arg1 error:(id*)arg2;
- (bool)deleteFieldsForSongUID:(id)arg1 deletions:(id)arg2 error:(id*)arg3;
- (id)initWithDestinationURL:(id)arg1;
- (id)lastCloudCheckDate;
- (void)setLastCloudCheckDate:(id)arg1;
- (bool)updateSongWithData:(id)arg1 error:(id*)arg2;

@end
