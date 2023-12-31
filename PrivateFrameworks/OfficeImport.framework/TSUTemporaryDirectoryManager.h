
@interface TSUTemporaryDirectoryManager : NSObject {
    NSURL * _baseDirectoryURL;
}

+ (id)baseDirectoryURL;
+ (id)makeUniqueDirectoryWithBaseDirectory:(id)arg1 filename:(id)arg2;
+ (Class)managedTemporaryDirectoryClass;
+ (id)sharedManager;

- (void).cxx_destruct;
- (void)_clearDirectories:(id)arg1;
- (id)_readDirectories;
- (id)init;
- (id)newDirectoryWithFilename:(id)arg1;

@end
