
@interface FSSimpleFileSystem : NSObject {
    FSModuleExtension * _extension;
}

@property (retain) FSModuleExtension *extension;

- (void).cxx_destruct;
- (id)extension;
- (void)setExtension:(id)arg1;
- (void)wipeResource:(id)arg1 includingRanges:(id)arg2 excludingRanges:(id)arg3 reply:(id /* block */)arg4;

@end
