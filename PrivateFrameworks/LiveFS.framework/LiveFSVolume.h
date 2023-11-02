
@interface LiveFSVolume : NSObject <LiveFSConnectionCoordination, LiveFSVolumeImplementation> {
    NSMapTable * _currentConnections;
    bool  _hasPersistentFileIDs;
    bool  _renameChangesFileID;
    unsigned long long  _workingSetInterest;
    int  connectionCount;
    unsigned long long  validConnections;
}

@property (readonly) bool hasPersistentFileIDs;
@property (readonly) bool renameChangesFileID;
@property unsigned long long workingSetInterest;

- (void).cxx_destruct;
- (void)LISMPUpdateItem:(id)arg1 nameOrPath:(id)arg2 interestedItem:(id)arg3 interestedClients:(unsigned long long)arg4 op:(int)arg5;
- (void)abortAllClientSearchesFor:(unsigned long long)arg1;
- (void)abortSearch:(id)arg1 requestID:(unsigned long long)arg2 reply:(id /* block */)arg3;
- (void)blockmapFile:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 startIO:(int)arg3 flags:(unsigned int)arg4 operationID:(unsigned long long)arg5 reply:(id /* block */)arg6;
- (void)checkAccessTo:(id)arg1 requestedAccess:(unsigned int)arg2 requestID:(unsigned long long)arg3 reply:(id /* block */)arg4;
- (void)close:(id)arg1 keepingMode:(int)arg2 requestID:(unsigned long long)arg3 reply:(id /* block */)arg4;
- (void)createIn:(id)arg1 named:(id)arg2 attributes:(id)arg3 andClient:(unsigned long long)arg4 requestID:(unsigned long long)arg5 reply:(id /* block */)arg6;
- (void)deletedItem:(id)arg1 name:(id)arg2 interestedItem:(id)arg3 how:(int)arg4 interestedClients:(unsigned long long)arg5;
- (void)deletedName:(id)arg1 item:(id)arg2 interestedItem:(id)arg3 how:(int)arg4 interestedClients:(unsigned long long)arg5;
- (void)endIO:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 status:(int)arg3 flags:(unsigned int)arg4 operationID:(unsigned long long)arg5 reply:(id /* block */)arg6;
- (void)fetchVolumeMachPortLabeled:(id)arg1 forClient:(unsigned long long)arg2 requestID:(unsigned long long)arg3 reply:(id /* block */)arg4;
- (void)fileAttributes:(id)arg1 requestID:(unsigned long long)arg2 reply:(id /* block */)arg3;
- (bool)hasPersistentFileIDs;
- (void)historyResetItem:(id)arg1 interestedItem:(id)arg2 interestedClients:(unsigned long long)arg3;
- (void)historyResetName:(id)arg1 interestedItem:(id)arg2 interestedClients:(unsigned long long)arg3;
- (id)init;
- (void)invalidateAllConnections;
- (void)invalidateFileNodesForConnection:(unsigned long long)arg1;
- (void)itemRenamedIn:(id)arg1 named:(id)arg2 originalID:(id)arg3 intoDirectory:(id)arg4 newName:(id)arg5 atopItem:(id)arg6 interestedClients:(unsigned long long)arg7;
- (void)itemUpdatesDone:(id)arg1 interestedClients:(unsigned long long)arg2;
- (void)listXattrsOf:(id)arg1 requestID:(unsigned long long)arg2 reply:(id /* block */)arg3;
- (void)lookupin:(id)arg1 name:(id)arg2 forClient:(unsigned long long)arg3 requestID:(unsigned long long)arg4 reply:(id /* block */)arg5;
- (void)makeCloneOf:(id)arg1 named:(id)arg2 inDirectory:(id)arg3 attributes:(id)arg4 usingFlags:(unsigned int)arg5 andClient:(unsigned long long)arg6 requestID:(unsigned long long)arg7 reply:(id /* block */)arg8;
- (void)makeDirectoryIn:(id)arg1 named:(id)arg2 attributes:(id)arg3 andClient:(unsigned long long)arg4 requestID:(unsigned long long)arg5 reply:(id /* block */)arg6;
- (void)makeLinkOf:(id)arg1 named:(id)arg2 inDirectory:(id)arg3 andClient:(unsigned long long)arg4 requestID:(unsigned long long)arg5 reply:(id /* block */)arg6;
- (void)makeSymLinkIn:(id)arg1 named:(id)arg2 contents:(id)arg3 attributes:(id)arg4 andClient:(unsigned long long)arg5 requestID:(unsigned long long)arg6 reply:(id /* block */)arg7;
- (unsigned long long)newConnectionIDOrError:(id*)arg1;
- (void)open:(id)arg1 withMode:(int)arg2 requestID:(unsigned long long)arg3 reply:(id /* block */)arg4;
- (void)otherAttributeOf:(id)arg1 named:(id)arg2 requestID:(unsigned long long)arg3 reply:(id /* block */)arg4;
- (void)parentsAndAttributesForItemsByID:(id)arg1 requestID:(unsigned long long)arg2 reply:(id /* block */)arg3;
- (void)pathConfiguration:(id)arg1 requestID:(unsigned long long)arg2 reply:(id /* block */)arg3;
- (void)readDirectory:(id)arg1 amount:(unsigned long long)arg2 cookie:(unsigned long long)arg3 verifier:(unsigned long long)arg4 requestID:(unsigned long long)arg5 reply:(id /* block */)arg6;
- (void)readDirectory:(id)arg1 intoBuffer:(id)arg2 cookie:(unsigned long long)arg3 verifier:(unsigned long long)arg4 requestID:(unsigned long long)arg5 reply:(id /* block */)arg6;
- (void)readDirectoryAndAttributes:(id)arg1 amount:(unsigned long long)arg2 cookie:(unsigned long long)arg3 verifier:(unsigned long long)arg4 requestID:(unsigned long long)arg5 reply:(id /* block */)arg6;
- (void)readDirectoryAndAttributes:(id)arg1 intoBuffer:(id)arg2 cookie:(unsigned long long)arg3 verifier:(unsigned long long)arg4 requestID:(unsigned long long)arg5 reply:(id /* block */)arg6;
- (void)readFrom:(id)arg1 atOffset:(unsigned long long)arg2 intoBuffer:(id)arg3 requestID:(unsigned long long)arg4 reply:(id /* block */)arg5;
- (void)readFrom:(id)arg1 length:(unsigned long long)arg2 atOffset:(unsigned long long)arg3 requestID:(unsigned long long)arg4 reply:(id /* block */)arg5;
- (void)readLinkOf:(id)arg1 requestID:(unsigned long long)arg2 reply:(id /* block */)arg3;
- (void)reclaim:(id)arg1 forClient:(unsigned long long)arg2 requestID:(unsigned long long)arg3 reply:(id /* block */)arg4;
- (void)releaseConnectionAllocation:(unsigned long long)arg1;
- (void)rememberConnection:(id)arg1 forID:(unsigned long long)arg2;
- (void)removeDirectory:(id)arg1 from:(id)arg2 named:(id)arg3 usingFlags:(int)arg4 requestID:(unsigned long long)arg5 reply:(id /* block */)arg6;
- (void)removeItem:(id)arg1 from:(id)arg2 named:(id)arg3 usingFlags:(int)arg4 requestID:(unsigned long long)arg5 reply:(id /* block */)arg6;
- (bool)renameChangesFileID;
- (void)renameItemIn:(id)arg1 named:(id)arg2 toDirectory:(id)arg3 newName:(id)arg4 usingFlags:(unsigned int)arg5 requestID:(unsigned long long)arg6 reply:(id /* block */)arg7;
- (void)replenishSearchCreditsFor:(id)arg1 credits:(unsigned int)arg2 requestID:(unsigned long long)arg3 reply:(id /* block */)arg4;
- (void)rootFileHandleForClient:(unsigned long long)arg1 reply:(id /* block */)arg2;
- (void)search:(id)arg1 token:(id)arg2 criteria:(id)arg3 returnProxy:(id)arg4 forClient:(unsigned long long)arg5 requestID:(unsigned long long)arg6 reply:(id /* block */)arg7;
- (void)setFileAttributesOf:(id)arg1 to:(id)arg2 requestID:(unsigned long long)arg3 reply:(id /* block */)arg4;
- (void)setOtherAttributeOf:(id)arg1 named:(id)arg2 value:(id)arg3 requestID:(unsigned long long)arg4 reply:(id /* block */)arg5;
- (void)setUpdateInterest:(id)arg1 interest:(bool)arg2 forClient:(unsigned long long)arg3 requestID:(unsigned long long)arg4 reply:(id /* block */)arg5;
- (void)setWorkingSetInterest:(unsigned long long)arg1;
- (void)setXattrOf:(id)arg1 named:(id)arg2 value:(id)arg3 how:(int)arg4 requestID:(unsigned long long)arg5 reply:(id /* block */)arg6;
- (void)updatedItem:(id)arg1 name:(id)arg2 interestedItem:(id)arg3 interestedClients:(unsigned long long)arg4;
- (void)updatedName:(id)arg1 interestedItem:(id)arg2 interestedClients:(unsigned long long)arg3;
- (void)verifyItemExistenceByIDs:(id)arg1 requestID:(unsigned long long)arg2 reply:(id /* block */)arg3;
- (void)volumeStatistics:(id)arg1 requestID:(unsigned long long)arg2 reply:(id /* block */)arg3;
- (void)volumeWideDeletedName:(id)arg1 interestedItem:(id)arg2 interestedClients:(unsigned long long)arg3;
- (void)volumeWideUpdatedName:(id)arg1 interestedItem:(id)arg2 interestedClients:(unsigned long long)arg3;
- (unsigned long long)workingSetInterest;
- (void)writeTo:(id)arg1 atOffset:(unsigned long long)arg2 fromBuffer:(id)arg3 requestID:(unsigned long long)arg4 reply:(id /* block */)arg5;
- (void)xattrOf:(id)arg1 named:(id)arg2 requestID:(unsigned long long)arg3 reply:(id /* block */)arg4;

@end
