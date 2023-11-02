
@interface BlastDoor.OverridingFileManager : NSFileManager {
    void overrides;
}

@property (nonatomic, readonly) NSURL *temporaryDirectory;

- (void).cxx_destruct;
- (id)URLForDirectory:(unsigned long long)arg1 inDomain:(unsigned long long)arg2 appropriateForURL:(id)arg3 create:(bool)arg4 error:(id*)arg5;
- (id)init;
- (id)temporaryDirectory;

@end
