
@interface DMCFileAccessRepairTool : NSObject {
    NSFileManager * _fileManager;
}

@property (nonatomic, retain) NSFileManager *fileManager;

- (void).cxx_destruct;
- (int)accessAtPath:(const char *)arg1 mode:(int)arg2 error:(int*)arg3;
- (bool)changePermissions:(unsigned short)arg1 ofFileAtPath:(id)arg2;
- (id)contentsOfFileAtPath:(id)arg1;
- (id)createFileManager;
- (id)createRepairToolErrorWithCode:(long long)arg1;
- (id)fileManager;
- (bool)fileManagerThinksFileNeedsRepairAtPath:(id)arg1;
- (bool)fileNeedsRepairAtPath:(id)arg1;
- (bool)posixThinksFileNeedsRepairAtPath:(id)arg1;
- (bool)repairFileAtPath:(id)arg1 error:(id*)arg2;
- (void)setFileManager:(id)arg1;
- (bool)writeData:(id)arg1 toFileAtPath:(id)arg2;

@end
