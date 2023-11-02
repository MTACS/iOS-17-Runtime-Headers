
@interface _GEOTileDBWriteQueue : NSObject {
    GEOTileDB * _db;
    unsigned long long  _maxOperations;
    unsigned long long  _maxOperationsSizeInBytes;
    NSMutableArray * _pendingOperations;
    unsigned long long  _pendingSizeInBytes;
    NSObject<OS_dispatch_queue> * _queue;
}

- (void).cxx_destruct;
- (void)_flushPendingOperations;
- (void)_prunePendingOperationsSupercededByOperationOnIsolationQueue:(id)arg1;
- (void)addOperation:(id)arg1;
- (id)dataForKey:(const struct _GEOTileKey { unsigned int x1 : 7; unsigned int x2 : 1; union { struct _GEOStandardTileKey { unsigned int x_1_2_1 : 40; unsigned int x_1_2_2 : 6; unsigned int x_1_2_3 : 26; unsigned int x_1_2_4 : 26; unsigned int x_1_2_5 : 14; unsigned int x_1_2_6 : 4; unsigned int x_1_2_7 : 4; } x_3_1_1; struct _GEOGloriaQuadIDTileKey { unsigned int x_2_2_1 : 6; unsigned int x_2_2_2 : 64; unsigned int x_2_2_3 : 14; unsigned int x_2_2_4 : 4; union { struct { unsigned int x_1_4_1 : 10; unsigned int x_1_4_2 : 10; unsigned int x_1_4_3 : 12; } x_5_3_1; unsigned int x_5_3_2; } x_2_2_5; } x_3_1_2; struct _GEORegionalResourceKey { unsigned int x_3_2_1 : 32; unsigned int x_3_2_2 : 8; unsigned int x_3_2_3 : 6; unsigned int x_3_2_4 : 8; unsigned int x_3_2_5 : 8; unsigned int x_3_2_6 : 1; unsigned int x_3_2_7 : 57; } x_3_1_3; struct _GEOSputnikMetadataKey { unsigned int x_4_2_1 : 32; unsigned int x_4_2_2 : 24; unsigned int x_4_2_3 : 14; unsigned int x_4_2_4 : 8; unsigned int x_4_2_5 : 42; } x_3_1_4; struct _GEOFlyoverKey { unsigned int x_5_2_1 : 6; unsigned int x_5_2_2 : 26; unsigned int x_5_2_3 : 26; unsigned int x_5_2_4 : 8; unsigned int x_5_2_5 : 24; unsigned int x_5_2_6 : 14; unsigned int x_5_2_7 : 8; unsigned int x_5_2_8 : 8; } x_3_1_5; } x3; }*)arg1 ETag:(id*)arg2 originalLoadReason:(unsigned char*)arg3 isKnownNotToExist:(bool*)arg4;
- (void)dropAllPendingOperations;
- (void)flushPendingOperations:(bool)arg1;
- (id)init;
- (id)initWithDB:(id)arg1 maxOperations:(unsigned long long)arg2 maxOperationsSizeInBytes:(unsigned long long)arg3;
- (void)prunePendingOperationsSupercededByOperation:(id)arg1;

@end
