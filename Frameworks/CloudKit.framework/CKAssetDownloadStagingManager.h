
@interface CKAssetDownloadStagingManager : NSObject <CKPropertiesDescription> {
    NSURL * _directory;
    NSMutableDictionary * _fileHandlesForInflightLastPathComponent;
    NSString * _fileProtectionType;
    NSURL * _finishedDownloadDirectory;
    NSURL * _inflightDownloadDirectory;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSURL *directory;
@property (nonatomic, retain) NSMutableDictionary *fileHandlesForInflightLastPathComponent;
@property (retain) NSString *fileProtectionType;
@property (nonatomic, readonly) NSURL *finishedDownloadDirectory;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSURL *inflightDownloadDirectory;
@property bool keepInflightFilesOpen;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)CKDescribePropertiesUsing:(id)arg1;
- (id)description;
- (id)directory;
- (id)fileHandlesForInflightLastPathComponent;
- (id)fileProtectionType;
- (bool)finishWithAssetDownloadStagingInfo:(id)arg1 fileURL:(id*)arg2 fileHandle:(id*)arg3 error:(id*)arg4;
- (id)finishedDownloadDirectory;
- (id)finishedURLWithInfo:(id)arg1;
- (id)inflightDownloadDirectory;
- (id)inflightLastPathComponentWithInfo:(id)arg1;
- (id)inflightURLWithLastPathComponent:(id)arg1;
- (id)initWithDirectory:(id)arg1;
- (bool)keepInflightFilesOpen;
- (bool)openWithAssetDownloadStagingInfo:(id)arg1 fileDescriptor:(int*)arg2 closeOnDealloc:(bool*)arg3 error:(id*)arg4;
- (id)redactedDescription;
- (void)setFileHandlesForInflightLastPathComponent:(id)arg1;
- (void)setFileProtectionType:(id)arg1;
- (void)setKeepInflightFilesOpen:(bool)arg1;

@end
