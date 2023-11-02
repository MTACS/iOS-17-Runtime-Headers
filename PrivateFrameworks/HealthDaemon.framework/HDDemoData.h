
@interface HDDemoData : NSObject {
    NSString * _demoDataPath;
    NSFileManager * _fileManager;
}

+ (id)demoDataDirectory;

- (void).cxx_destruct;

@end
