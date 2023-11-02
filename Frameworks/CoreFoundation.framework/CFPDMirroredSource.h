
@interface CFPDMirroredSource : CFPDSource {
    CFPDSource * _mirrorSource;
    struct __CFSet { } * _mirroredKeys;
}

- (id)acceptMessage:(id)arg1;
- (int)cacheFileInfoForWriting:(bool)arg1 euid:(unsigned int)arg2 egid:(unsigned int)arg3 didCreate:(bool*)arg4;
- (void)clearCacheForReason:(struct __CFString { }*)arg1;
- (id /* block */)createDiskWrite;
- (void)dealloc;
- (void)drainPendingChanges;
- (bool)enqueueNewKey:(id)arg1 value:(id)arg2 encoding:(int)arg3 inBatch:(bool)arg4 fromMessage:(id)arg5;
- (void)handleWritingResult:(struct __CFDictionary { }*)arg1;
- (id)initWithDomain:(struct __CFString { }*)arg1 userName:(struct __CFString { }*)arg2 byHost:(bool)arg3 managed:(bool)arg4 mirroredKeys:(struct __CFArray { }*)arg5 shmemIndex:(short)arg6 daemon:(id)arg7;
- (void)lock;
- (void)unlock;

@end
