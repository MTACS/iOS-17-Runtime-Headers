
@interface DSNSHelperContext : NSObject {
    void * impl;
}

- (void)clearCopyStateForSources:(id)arg1 destination:(id)arg2 targetNames:(id)arg3 groupUUID:(id)arg4;
- (bool)copyItemsAtURLs:(id)arg1 toURL:(id)arg2 options:(unsigned long long)arg3 conflictStrategy:(id)arg4 receiveTargets:(id /* block */)arg5 error:(id*)arg6;
- (bool)copyRootMetadataAtURL:(id)arg1 toDestinationURL:(id)arg2 targetName:(id)arg3 error:(id*)arg4;
- (bool)createLockInDestinationURL:(id)arg1 sourceURL:(id)arg2 groupUUID:(id)arg3 groupCount:(long long)arg4 conflictStrategy:(id)arg5 isDuplication:(bool)arg6 clonedInstead:(bool*)arg7 resultName:(id*)arg8 error:(id*)arg9;
- (bool)createLockNamed:(id)arg1 destinationURL:(id)arg2 sourceURL:(id)arg3 groupUUID:(id)arg4 isDuplication:(bool)arg5 groupCount:(long long)arg6 clonedInstead:(bool*)arg7 error:(id*)arg8;
- (void)dealloc;
- (bool)ensureFreeSpace:(long long)arg1 onVolume:(id)arg2 error:(id*)arg3;
- (id)initWithOptions:(unsigned int)arg1 delegate:(id)arg2;
- (bool)launchDesktopServicesHelper:(id*)arg1;
- (bool)preflightAndCloneIfPossible:(id)arg1 toURL:(id)arg2 groupUUID:(id)arg3 sourceURLsToCopy:(id*)arg4 isDuplication:(bool)arg5 targetNames:(id*)arg6 maxFileSize:(unsigned long long*)arg7 conflictStrategy:(id)arg8 receiveTargets:(id /* block */)arg9 error:(id*)arg10;
- (unsigned long long)resolveConflictAtURL:(id)arg1 withStrategy:(id)arg2;
- (bool)sizeURL:(id)arg1 destinationURL:(id)arg2 targetName:(id)arg3 coordinate:(bool)arg4 spaceNeeds:(struct DestinationSpaceNeeds { long long x1; long long x2; long long x3; long long x4; long long x5; long long x6; long long x7; long long x8; long long x9; long long x10; long long x11; long long x12; long long x13; BOOL x14[1024]; BOOL x15[1024]; long long x16; unsigned long long x17; bool x18; unsigned int x19; int x20; }*)arg5 groupUUID:(id)arg6 error:(id*)arg7;
- (void)stopAccessingURLs:(id)arg1;

@end
