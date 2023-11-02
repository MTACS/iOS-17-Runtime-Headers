
@interface IMDDonationManager : NSObject {
    NSFileManager * _fileManager;
}

@property (nonatomic, retain) NSFileManager *fileManager;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)copyGroupPhotoToExternalPathIfNecessary:(id)arg1 chatGUID:(id)arg2 attachmentFilepath:(id)arg3;
- (void)dealloc;
- (id)fileManager;
- (id)init;
- (void)setFileManager:(id)arg1;

@end
