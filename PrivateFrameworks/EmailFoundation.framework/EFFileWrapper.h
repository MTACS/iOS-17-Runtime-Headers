
@interface EFFileWrapper : NSFileWrapper {
    EFPathComponent * _filenamePathComponent;
    EFPathComponent * _preferredFilenamePathComponent;
}

@property (nonatomic, retain) EFPathComponent *filenamePathComponent;
@property (nonatomic, retain) EFPathComponent *preferredFilenamePathComponent;

- (void).cxx_destruct;
- (id)filename;
- (id)filenamePathComponent;
- (id)init;
- (id)initDirectoryWithFileWrappers:(id)arg1;
- (id)initRegularFileWithContents:(id)arg1;
- (id)initWithSerializedRepresentation:(id)arg1;
- (id)initWithURL:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3;
- (id)preferredFilename;
- (id)preferredFilenamePathComponent;
- (void)setFilename:(id)arg1;
- (void)setFilenamePathComponent:(id)arg1;
- (void)setPreferredFilename:(id)arg1;
- (void)setPreferredFilenamePathComponent:(id)arg1;

@end
