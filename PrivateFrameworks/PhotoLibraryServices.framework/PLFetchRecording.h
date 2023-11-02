
@interface PLFetchRecording : NSObject {
    int  _fd;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _indexLock;
    void * _indexLocked_buffer;
    unsigned long long  _indexLocked_bufferLen;
    NSMutableDictionary * _indexLocked_indexEntriesByNormSQLHash;
    unsigned long long  _maxFileSize;
    unsigned long long  _mode;
    _Atomic int  _numberOfAllocationsSinceLastRemap;
    struct atomic_flag { 
        _Atomic bool _Value; 
    }  _remapPending;
    NSObject<OS_dispatch_queue> * _remapQueue;
    NSURL * _url;
}

@property (nonatomic, readonly) unsigned long long mode;
@property (nonatomic, readonly) NSURL *url;

+ (void)_assertAddress:(long long)arg1 isValidWithLength:(unsigned long long)arg2 buffer:(void*)arg3 bufferLength:(unsigned long long)arg4;
+ (id)_backtrace;
+ (void)_enumerateVariationsFromEntryHeader:(struct PLFetchRecordingFileNormalizedStatementHeader { unsigned char x1; unsigned char x2[32]; double x3; unsigned int x4; unsigned int x5; unsigned int x6; double x7; double x8; double x9; double x10; unsigned short x11; unsigned short x12; unsigned short x13; unsigned short x14; unsigned short x15; unsigned char x16; unsigned char x17; }*)arg1 block:(id /* block */)arg2;
+ (struct _NSRange { unsigned long long x1; unsigned long long x2; })_indexLocked_allocateSizeToFit:(unsigned long long)arg1 currentEOF:(long long)arg2 buffer:(void*)arg3 bufferLength:(unsigned long long)arg4 index:(id)arg5;
+ (void)_indexLocked_enumerateEntryHeadersFromBuffer:(const void*)arg1 bufferLength:(unsigned long long)arg2 block:(id /* block */)arg3;
+ (void)_indexLocked_populateStatementIndex:(id)arg1 fromBuffer:(void*)arg2 bufferLength:(unsigned long long)arg3;
+ (bool)_statsForStatementAreInteresting:(struct PLFetchRecordingFileNormalizedStatementHeader { unsigned char x1; unsigned char x2[32]; double x3; unsigned int x4; unsigned int x5; unsigned int x6; double x7; double x8; double x9; double x10; unsigned short x11; unsigned short x12; unsigned short x13; unsigned short x14; unsigned short x15; unsigned char x16; unsigned char x17; }*)arg1 totalPages:(unsigned int)arg2;
+ (void)_updateRunningVarianceForEntry:(struct PLFetchRecordingFileNormalizedStatementHeader { unsigned char x1; unsigned char x2[32]; double x3; unsigned int x4; unsigned int x5; unsigned int x6; double x7; double x8; double x9; double x10; unsigned short x11; unsigned short x12; unsigned short x13; unsigned short x14; unsigned short x15; unsigned char x16; unsigned char x17; }*)arg1 givenPageCount:(unsigned int)arg2;
+ (void)_writeInitialHeaderToBuffer:(void*)arg1 bufferLen:(unsigned long long)arg2;
+ (id)backtraceForEntryHeader:(struct PLFetchRecordingFileNormalizedStatementHeader { unsigned char x1; unsigned char x2[32]; double x3; unsigned int x4; unsigned int x5; unsigned int x6; double x7; double x8; double x9; double x10; unsigned short x11; unsigned short x12; unsigned short x13; unsigned short x14; unsigned short x15; unsigned char x16; unsigned char x17; }*)arg1;
+ (const char *)bindVariablesForEntryHeader:(struct PLFetchRecordingFileNormalizedStatementHeader { unsigned char x1; unsigned char x2[32]; double x3; unsigned int x4; unsigned int x5; unsigned int x6; double x7; double x8; double x9; double x10; unsigned short x11; unsigned short x12; unsigned short x13; unsigned short x14; unsigned short x15; unsigned char x16; unsigned char x17; }*)arg1;
+ (const char *)contextNameForEntryHeader:(struct PLFetchRecordingFileNormalizedStatementHeader { unsigned char x1; unsigned char x2[32]; double x3; unsigned int x4; unsigned int x5; unsigned int x6; double x7; double x8; double x9; double x10; unsigned short x11; unsigned short x12; unsigned short x13; unsigned short x14; unsigned short x15; unsigned char x16; unsigned char x17; }*)arg1;
+ (bool)deleteRecording:(id)arg1 error:(id*)arg2;
+ (double)meanPageCountForEntryHeader:(struct PLFetchRecordingFileNormalizedStatementHeader { unsigned char x1; unsigned char x2[32]; double x3; unsigned int x4; unsigned int x5; unsigned int x6; double x7; double x8; double x9; double x10; unsigned short x11; unsigned short x12; unsigned short x13; unsigned short x14; unsigned short x15; unsigned char x16; unsigned char x17; }*)arg1;
+ (id)multiInCountsForEntryHeader:(struct PLFetchRecordingFileNormalizedStatementHeader { unsigned char x1; unsigned char x2[32]; double x3; unsigned int x4; unsigned int x5; unsigned int x6; double x7; double x8; double x9; double x10; unsigned short x11; unsigned short x12; unsigned short x13; unsigned short x14; unsigned short x15; unsigned char x16; unsigned char x17; }*)arg1;
+ (const char *)normalizedSQLForEntryHeader:(struct PLFetchRecordingFileNormalizedStatementHeader { unsigned char x1; unsigned char x2[32]; double x3; unsigned int x4; unsigned int x5; unsigned int x6; double x7; double x8; double x9; double x10; unsigned short x11; unsigned short x12; unsigned short x13; unsigned short x14; unsigned short x15; unsigned char x16; unsigned char x17; }*)arg1;
+ (double)stdDevPageCountForEntryHeader:(struct PLFetchRecordingFileNormalizedStatementHeader { unsigned char x1; unsigned char x2[32]; double x3; unsigned int x4; unsigned int x5; unsigned int x6; double x7; double x8; double x9; double x10; unsigned short x11; unsigned short x12; unsigned short x13; unsigned short x14; unsigned short x15; unsigned char x16; unsigned char x17; }*)arg1;
+ (id)suggestedFilenameForCurrentProcess;
+ (double)varPageCountForEntryHeader:(struct PLFetchRecordingFileNormalizedStatementHeader { unsigned char x1; unsigned char x2[32]; double x3; unsigned int x4; unsigned int x5; unsigned int x6; double x7; double x8; double x9; double x10; unsigned short x11; unsigned short x12; unsigned short x13; unsigned short x14; unsigned short x15; unsigned char x16; unsigned char x17; }*)arg1;

- (void).cxx_destruct;
- (void)_considerIfRemapIsNeeded;
- (void)_indexLocked_close;
- (bool)_indexLocked_remapFile;
- (void)_indexLocked_unmapFile;
- (bool)_isOpen;
- (void)_recordVariationWithEntryHeader:(struct PLFetchRecordingFileNormalizedStatementHeader { unsigned char x1; unsigned char x2[32]; double x3; unsigned int x4; unsigned int x5; unsigned int x6; double x7; double x8; double x9; double x10; unsigned short x11; unsigned short x12; unsigned short x13; unsigned short x14; unsigned short x15; unsigned char x16; unsigned char x17; }*)arg1 timestamp:(double)arg2 pagesHit:(unsigned int)arg3 pagesMissed:(unsigned int)arg4 rowsAffected:(unsigned int)arg5 duration:(double)arg6 QOS:(unsigned int)arg7;
- (void)_scheduleRemapAfterDelay;
- (void)close;
- (void)dealloc;
- (struct PLFetchRecordingFileNormalizedStatementHeader { unsigned char x1; unsigned char x2[32]; double x3; unsigned int x4; unsigned int x5; unsigned int x6; double x7; double x8; double x9; double x10; unsigned short x11; unsigned short x12; unsigned short x13; unsigned short x14; unsigned short x15; unsigned char x16; unsigned char x17; }*)entryForNormalizedSQL:(id)arg1;
- (void)enumerateEntryHeaders:(id /* block */)arg1;
- (void)enumerateVariationsFromEntryHeader:(struct PLFetchRecordingFileNormalizedStatementHeader { unsigned char x1; unsigned char x2[32]; double x3; unsigned int x4; unsigned int x5; unsigned int x6; double x7; double x8; double x9; double x10; unsigned short x11; unsigned short x12; unsigned short x13; unsigned short x14; unsigned short x15; unsigned char x16; unsigned char x17; }*)arg1 block:(id /* block */)arg2;
- (int)fd;
- (struct PLFetchRecordingFileHeader { BOOL x1[13]; BOOL x2[129]; BOOL x3[37]; BOOL x4[37]; unsigned int x5; unsigned int x6; unsigned int x7; }*)fileHeader;
- (id)initWithMode:(unsigned long long)arg1 atFileURL:(id)arg2 size:(unsigned long long)arg3;
- (unsigned long long)mode;
- (bool)recordStatementWithNormalizedSQL:(id)arg1 bindVariablesAsString:(id)arg2 multiInCounts:(id)arg3 contextName:(id)arg4 pagesHit:(unsigned int)arg5 pagesMissed:(unsigned int)arg6 rowCount:(unsigned int)arg7 duration:(double)arg8 QOS:(unsigned int)arg9;
- (bool)remap;
- (id)url;

@end
