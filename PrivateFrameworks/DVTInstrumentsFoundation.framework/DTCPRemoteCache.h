
@interface DTCPRemoteCache : NSObject {
    id * _locks;
}

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)kindToString:(long long)arg1;
+ (id)sharedDTCPRemoteCache;

- (id)_directoryForDevice:(id)arg1;
- (id)_filePathForKind:(long long)arg1 fileType:(id)arg2 directoryURL:(id)arg3;
- (bool)accessFileKind:(long long)arg1 device:(id)arg2 fileType:(id)arg3 block:(id /* block */)arg4;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)init;

@end
