
@interface WFShortcutPackageFile : NSObject {
    NSObject<OS_dispatch_queue> * _executionQueue;
    NSFileManager * _fileManager;
    NSString * _sanitizedName;
    NSData * _shortcutData;
    NSString * _shortcutName;
    NSData * _signedShortcutData;
    NSURL * _signedShortcutFileURL;
    NSURL * _temporaryWorkingDirectoryURL;
}

@property (nonatomic, readonly) NSString *directoryName;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *executionQueue;
@property (nonatomic, readonly) NSFileManager *fileManager;
@property (nonatomic, readonly) NSString *fileName;
@property (nonatomic, readonly) NSString *sanitizedName;
@property (nonatomic, retain) NSData *shortcutData;
@property (nonatomic, readonly) NSString *shortcutName;
@property (nonatomic, retain) NSData *signedShortcutData;
@property (nonatomic, readonly) NSURL *signedShortcutFileURL;
@property (nonatomic, readonly) NSURL *temporaryWorkingDirectoryURL;

- (void).cxx_destruct;
- (void)commonInit;
- (id)directoryName;
- (id)executionQueue;
- (void)extractShortcutFileRepresentationWithCompletion:(id /* block */)arg1;
- (id)extractShortcutFileRepresentationWithError:(id*)arg1;
- (id)extractShortcutFileRepresentationWithSigningMethod:(long long*)arg1 error:(id*)arg2;
- (id)extractShortcutFileRepresentationWithSigningMethod:(long long*)arg1 iCloudIdentifier:(id*)arg2 error:(id*)arg3;
- (id)fileManager;
- (id)fileName;
- (id)generateDirectoryStructureInDirectory:(id)arg1 error:(id*)arg2;
- (id)generateSignedShortcutFileRepresentationWithAccount:(id)arg1 error:(id*)arg2;
- (id)generateSignedShortcutFileRepresentationWithPrivateKey:(struct __SecKey { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; struct __SecKeyDescriptor {} *x2; void *x3; }*)arg1 signingContext:(id)arg2 error:(id*)arg3;
- (id)initWithShortcutData:(id)arg1 shortcutName:(id)arg2;
- (id)initWithSignedShortcutData:(id)arg1 shortcutName:(id)arg2;
- (id)initWithSignedShortcutFileURL:(id)arg1;
- (void)preformShortcutDataExtractionWithCompletion:(id /* block */)arg1;
- (id)sanitizedName;
- (void)setShortcutData:(id)arg1;
- (void)setSignedShortcutData:(id)arg1;
- (id)shortcutData;
- (id)shortcutName;
- (id)signedShortcutData;
- (id)signedShortcutFileURL;
- (id)temporaryWorkingDirectoryURL;

@end
