
@interface CHSSnapshotContext : NSObject {
    CHSScreenshotPresentationAttributes * _attributes;
    bool  _checkedContentType;
    bool  _checkedFileExists;
    bool  _fileExists;
    NSFileManager * _fileManager;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _fileManagerLock;
    NSURL * _url;
    bool  _usesCAPackage;
}

@property (nonatomic, readonly) CHSScreenshotPresentationAttributes *attributes;
@property (nonatomic, readonly) NSString *contentIdentifier;
@property (nonatomic, readonly) bool fileExists;
@property (nonatomic, readonly) bool needsCAPackage;
@property (nonatomic, readonly) NSString *typeIdentifier;
@property (nonatomic, readonly) NSURL *url;

- (void).cxx_destruct;
- (id)attributes;
- (id)contentIdentifier;
- (bool)fileExists;
- (id)initWithURL:(id)arg1 attributes:(id)arg2 fileManager:(id)arg3;
- (bool)needsCAPackage;
- (id)typeIdentifier;
- (id)url;

@end
