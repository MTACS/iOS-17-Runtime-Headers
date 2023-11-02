
@interface VCStatsRecorder : NSObject {
    unsigned short  _currentLocalStatsIndex;
    struct { 
        double requestTime; 
        unsigned char linkID; 
        unsigned short statsIdentifier; 
        unsigned int totalLocalMediaPacketSent; 
        unsigned int totalLocalMediaPacketReceived; 
        unsigned int totalServerStatsByteUsed; 
    }  _localStats;
    struct _opaque_pthread_rwlock_t { 
        long long __sig; 
        BOOL __opaque[192]; 
    }  _stateRWLock;
    unsigned int  _uplinkServerStatsByteUsed;
}

- (void)dealloc;
- (void)getLocalStats:(unsigned short)arg1 localSessionStats:(struct { double x1; unsigned char x2; unsigned short x3; unsigned int x4; unsigned int x5; unsigned int x6; }*)arg2;
- (struct { double x1; unsigned char x2; unsigned short x3; unsigned int x4; unsigned int x5; unsigned int x6; })getMostRecentLocalStats;
- (id)init;
- (int)serverStatsSizeInByteForUplink:(bool)arg1 connection:(id)arg2;
- (void)updateSessionStats:(unsigned short)arg1 connection:(id)arg2 totalPacketSent:(unsigned int)arg3 totalPacketReceived:(unsigned int)arg4;

@end
