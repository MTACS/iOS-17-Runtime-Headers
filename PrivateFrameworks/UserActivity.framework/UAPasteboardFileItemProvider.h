
@interface UAPasteboardFileItemProvider : NSObject <UAPasteboardFileItemProviding> {
    NSURL * _fileURL;
    bool  _isDir;
    bool  _preferFileRep;
    NSData * _sandboxExtension;
    NSString * _type;
    NSUUID * _uuid;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) NSURL *fileURL;
@property (readonly) unsigned long long hash;
@property bool isDir;
@property (nonatomic) bool preferFileRep;
@property (retain) NSData *sandboxExtension;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *type;
@property (nonatomic, copy) NSUUID *uuid;

+ (bool)conformsToProtocol:(id)arg1;

- (void).cxx_destruct;
- (void)accessFileAtURLWithCompletion:(id /* block */)arg1;
- (id)fileURL;
- (void)getDataFileWithCompletionBlock:(id /* block */)arg1;
- (void)getDataWithCompletionBlock:(id /* block */)arg1;
- (id)getFileName;
- (id)initWithURL:(id)arg1 sandboxExtension:(id)arg2;
- (bool)isDir;
- (bool)preferFileRep;
- (id)sandboxExtension;
- (void)setFileURL:(id)arg1;
- (void)setIsDir:(bool)arg1;
- (void)setPreferFileRep:(bool)arg1;
- (void)setSandboxExtension:(id)arg1;
- (void)setType:(id)arg1;
- (void)setUuid:(id)arg1;
- (id)type;
- (id)uuid;

@end
