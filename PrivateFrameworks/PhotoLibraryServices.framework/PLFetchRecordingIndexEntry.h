
@interface PLFetchRecordingIndexEntry : NSObject {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _entryLock;
    long long  _offset;
    bool  _unavailable;
}

@property (nonatomic, readonly) long long offset;
@property (nonatomic, readonly) bool unavailable;

- (void)entryLocked_markUnavailable;
- (struct PLFetchRecordingFileNormalizedStatementHeader { unsigned char x1; unsigned char x2[32]; double x3; unsigned int x4; unsigned int x5; unsigned int x6; double x7; double x8; double x9; double x10; unsigned short x11; unsigned short x12; unsigned short x13; unsigned short x14; unsigned short x15; unsigned char x16; unsigned char x17; }*)entryLocked_statementEntryFomBuffer:(void*)arg1;
- (id)initWithOffset:(long long)arg1;
- (void)lock;
- (long long)offset;
- (bool)unavailable;
- (void)unlock;

@end
