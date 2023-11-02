
@interface LiveFSServiceConnection : NSObject <LiveFSConnectorMaker, LiveFSVolumeCore, NSFileProviderLiveItemCore> {
    unsigned long long  _ourID;
    LiveFSVolume * mount;
    NSXPCConnection * ourConnection;
    NSObject<OS_dispatch_queue> * setUpdateInterestQueue;
}

@property (readonly) unsigned long long ourID;

+ (id)newConnectionForMount:(id)arg1 connection:(id)arg2 error:(id*)arg3;
+ (id)newExportObjectForObject:(id)arg1 connection:(id)arg2 error:(id*)arg3;

- (void).cxx_destruct;
- (void)LIGetAttr:(id)arg1 reply:(id /* block */)arg2;
- (void)LIGetFsAttr:(id)arg1 name:(id)arg2 reply:(id /* block */)arg3;
- (void)LIGetParentsAndAttributesForFileIDs:(id)arg1 reply:(id /* block */)arg2;
- (void)LIGetRootFileHandle:(id /* block */)arg1;
- (void)LILookup:(id)arg1 name:(id)arg2 reply:(id /* block */)arg3;
- (void)LISearch:(id)arg1 token:(id)arg2 criteria:(id)arg3 resumeAt:(id)arg4 maxData:(unsigned int)arg5 maxDelay:(double)arg6 initialCredits:(unsigned int)arg7 reply:(id /* block */)arg8;
- (void)LISearchAbort:(id)arg1 reply:(id /* block */)arg2;
- (void)abortSearch:(id)arg1 requestID:(unsigned long long)arg2 reply:(id /* block */)arg3;
- (void)blockmapFile:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 startIO:(int)arg3 flags:(unsigned int)arg4 operationID:(unsigned long long)arg5 reply:(id /* block */)arg6;
- (void)checkAccessTo:(id)arg1 requestedAccess:(unsigned int)arg2 requestID:(unsigned long long)arg3 reply:(id /* block */)arg4;
- (void)close:(id)arg1 keepingMode:(int)arg2 requestID:(unsigned long long)arg3 reply:(id /* block */)arg4;
- (void)connectionWasInterrupted;
- (void)connectionWasInvalidated;
- (void)createIn:(id)arg1 named:(id)arg2 attributes:(id)arg3 requestID:(unsigned long long)arg4 reply:(id /* block */)arg5;
- (void)dealloc;
- (void)endIO:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 status:(int)arg3 flags:(unsigned int)arg4 operationID:(unsigned long long)arg5 reply:(id /* block */)arg6;
- (void)fetchVolumeMachPortLabeled:(id)arg1 requestID:(unsigned long long)arg2 reply:(id /* block */)arg3;
- (void)fileAttributes:(id)arg1 requestID:(unsigned long long)arg2 reply:(id /* block */)arg3;
- (void)getRootFileHandleWithError:(id /* block */)arg1;
- (id)initForMount:(id)arg1 connection:(id)arg2 error:(id*)arg3;
- (void)listXattrsOf:(id)arg1 requestID:(unsigned long long)arg2 reply:(id /* block */)arg3;
- (void)lookupIn:(id)arg1 name:(id)arg2 requestID:(unsigned long long)arg3 reply:(id /* block */)arg4;
- (void)makeCloneOf:(id)arg1 named:(id)arg2 inDirectory:(id)arg3 attributes:(id)arg4 usingFlags:(unsigned int)arg5 requestID:(unsigned long long)arg6 reply:(id /* block */)arg7;
- (void)makeDirectoryIn:(id)arg1 named:(id)arg2 attributes:(id)arg3 requestID:(unsigned long long)arg4 reply:(id /* block */)arg5;
- (void)makeLinkOf:(id)arg1 named:(id)arg2 inDirectory:(id)arg3 requestID:(unsigned long long)arg4 reply:(id /* block */)arg5;
- (void)makeSymLinkIn:(id)arg1 named:(id)arg2 contents:(id)arg3 attributes:(id)arg4 requestID:(unsigned long long)arg5 reply:(id /* block */)arg6;
- (void)open:(id)arg1 withMode:(int)arg2 requestID:(unsigned long long)arg3 reply:(id /* block */)arg4;
- (void)otherAttributeOf:(id)arg1 named:(id)arg2 requestID:(unsigned long long)arg3 reply:(id /* block */)arg4;
- (unsigned long long)ourID;
- (void)parentsAndAttributesForItemsByID:(id)arg1 requestID:(unsigned long long)arg2 reply:(id /* block */)arg3;
- (void)pathConfiguration:(id)arg1 requestID:(unsigned long long)arg2 reply:(id /* block */)arg3;
- (void)pathsAndAttributesForItemsByIDs:(id)arg1 requestID:(unsigned long long)arg2 reply:(id /* block */)arg3;
- (void)readDirectory:(id)arg1 amount:(unsigned long long)arg2 cookie:(unsigned long long)arg3 verifier:(unsigned long long)arg4 requestID:(unsigned long long)arg5 reply:(id /* block */)arg6;
- (void)readDirectory:(id)arg1 intoBuffer:(id)arg2 cookie:(unsigned long long)arg3 verifier:(unsigned long long)arg4 requestID:(unsigned long long)arg5 reply:(id /* block */)arg6;
- (void)readDirectoryAndAttributes:(id)arg1 amount:(unsigned long long)arg2 cookie:(unsigned long long)arg3 verifier:(unsigned long long)arg4 requestID:(unsigned long long)arg5 reply:(id /* block */)arg6;
- (void)readDirectoryAndAttributes:(id)arg1 intoBuffer:(id)arg2 cookie:(unsigned long long)arg3 verifier:(unsigned long long)arg4 requestID:(unsigned long long)arg5 reply:(id /* block */)arg6;
- (void)readFrom:(id)arg1 atOffset:(unsigned long long)arg2 intoBuffer:(id)arg3 requestID:(unsigned long long)arg4 reply:(id /* block */)arg5;
- (void)readFrom:(id)arg1 length:(unsigned long long)arg2 atOffset:(unsigned long long)arg3 requestID:(unsigned long long)arg4 reply:(id /* block */)arg5;
- (void)readLinkOf:(id)arg1 requestID:(unsigned long long)arg2 reply:(id /* block */)arg3;
- (void)reclaim:(id)arg1 requestID:(unsigned long long)arg2 reply:(id /* block */)arg3;
- (void)removeDirectory:(id)arg1 from:(id)arg2 named:(id)arg3 usingFlags:(int)arg4 requestID:(unsigned long long)arg5 reply:(id /* block */)arg6;
- (void)removeItem:(id)arg1 from:(id)arg2 named:(id)arg3 usingFlags:(int)arg4 requestID:(unsigned long long)arg5 reply:(id /* block */)arg6;
- (void)renameItemIn:(id)arg1 named:(id)arg2 toDirectory:(id)arg3 newName:(id)arg4 usingFlags:(unsigned int)arg5 requestID:(unsigned long long)arg6 reply:(id /* block */)arg7;
- (void)replenishSearchCreditsFor:(id)arg1 credits:(unsigned int)arg2 requestID:(unsigned long long)arg3 reply:(id /* block */)arg4;
- (id)sanitizedAttrsForNewObjectAttrs:(id)arg1 forType:(unsigned int)arg2;
- (void)scrubOurClientId;
- (void)search:(id)arg1 token:(id)arg2 criteria:(id)arg3 resumeAt:(id)arg4 maxData:(unsigned int)arg5 maxDelay:(double)arg6 initialCredits:(unsigned int)arg7 requestID:(unsigned long long)arg8 reply:(id /* block */)arg9;
- (void)setFileAttributesOf:(id)arg1 to:(id)arg2 requestID:(unsigned long long)arg3 reply:(id /* block */)arg4;
- (void)setOtherAttributeOf:(id)arg1 named:(id)arg2 value:(id)arg3 requestID:(unsigned long long)arg4 reply:(id /* block */)arg5;
- (void)setUpdateInterest:(id)arg1 interest:(bool)arg2 requestID:(unsigned long long)arg3 reply:(id /* block */)arg4;
- (void)setXattrOf:(id)arg1 named:(id)arg2 value:(id)arg3 how:(int)arg4 requestID:(unsigned long long)arg5 reply:(id /* block */)arg6;
- (void)verifyItemExistenceByIDs:(id)arg1 requestID:(unsigned long long)arg2 reply:(id /* block */)arg3;
- (void)volumeStatistics:(id)arg1 requestID:(unsigned long long)arg2 reply:(id /* block */)arg3;
- (void)writeTo:(id)arg1 atOffset:(unsigned long long)arg2 fromBuffer:(id)arg3 requestID:(unsigned long long)arg4 reply:(id /* block */)arg5;
- (void)writeTo:(id)arg1 atOffset:(unsigned long long)arg2 sharedBuffer:(id)arg3 requestID:(unsigned long long)arg4 reply:(id /* block */)arg5;
- (void)xattrOf:(id)arg1 named:(id)arg2 requestID:(unsigned long long)arg3 reply:(id /* block */)arg4;

@end
