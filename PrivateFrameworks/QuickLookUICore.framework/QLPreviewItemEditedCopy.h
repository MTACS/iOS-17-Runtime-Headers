
@interface QLPreviewItemEditedCopy : NSObject <NSSecureCoding> {
    FPSandboxingURLWrapper * _directoryURLWrapper;
    NSURL * _editedCopyURL;
    FPSandboxingURLWrapper * _editedCopyURLWrapper;
    NSURL * _hostTemporaryContainerURL;
    bool  _temporaryDirectoryWasCreatedInHost;
    NSUUID * _uuid;
    unsigned long long  _version;
}

@property (nonatomic, readonly) NSURL *containerURL;
@property (nonatomic, retain) FPSandboxingURLWrapper *directoryURLWrapper;
@property (nonatomic, retain) NSURL *editedCopyURL;
@property (nonatomic, retain) FPSandboxingURLWrapper *editedCopyURLWrapper;
@property (nonatomic, retain) NSURL *hostTemporaryContainerURL;
@property (nonatomic, readonly) NSString *outputURLContentType;
@property (nonatomic) bool temporaryDirectoryWasCreatedInHost;
@property (nonatomic, readonly) NSURL *url;
@property (nonatomic, retain) NSUUID *uuid;
@property (nonatomic) unsigned long long version;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)bumpVersion;
- (bool)containerStillExists;
- (id)containerURL;
- (id)description;
- (id)directoryURLWrapper;
- (id)editedCopyURL;
- (id)editedCopyURLWrapper;
- (void)encodeWithCoder:(id)arg1;
- (id)hostTemporaryContainerURL;
- (id)initWithCoder:(id)arg1;
- (id)initWithEditedCopyURL:(id)arg1;
- (id)initWithEditedCopyURL:(id)arg1 containerTemporaryURL:(id)arg2 temporaryDirectoryCreatedInHost:(bool)arg3;
- (id)initWithEditedCopyURL:(id)arg1 temporaryDirectoryCreatedInHost:(bool)arg2;
- (bool)isEqual:(id)arg1;
- (void)markAsPurgeable;
- (id)outputURLContentType;
- (void)removeFromDisk:(bool)arg1;
- (void)setDirectoryURLWrapper:(id)arg1;
- (void)setEditedCopyURL:(id)arg1;
- (void)setEditedCopyURLWrapper:(id)arg1;
- (void)setHostTemporaryContainerURL:(id)arg1;
- (void)setTemporaryDirectoryWasCreatedInHost:(bool)arg1;
- (void)setUuid:(id)arg1;
- (void)setVersion:(unsigned long long)arg1;
- (bool)temporaryDirectoryWasCreatedInHost;
- (id)url;
- (id)uuid;
- (unsigned long long)version;

@end
