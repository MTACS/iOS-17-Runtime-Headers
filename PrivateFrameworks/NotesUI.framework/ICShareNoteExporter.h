
@interface ICShareNoteExporter : NSObject {
    NSURL * _exportDirectory;
}

@property (nonatomic, retain) NSURL *exportDirectory;

- (void).cxx_destruct;
- (void)cleanUpExportedFiles;
- (id)exportDirectory;
- (id)exportRTFDFileFromNote:(id)arg1;
- (id)fileWrapperForNote:(id)arg1;
- (id)filenameFromTitle:(id)arg1;
- (void)setExportDirectory:(id)arg1;

@end
