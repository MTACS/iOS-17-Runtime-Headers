
@interface ATXGroupHistogram : NSObject {
    NSMutableDictionary * _histogram;
    bool  _isTotalScoreValid;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  _lock;
    double  _total;
}

- (void).cxx_destruct;
- (double)_getTotalScore;
- (void)addScore:(double)arg1 group:(id)arg2;
- (void)dealloc;
- (double)getScoreForGroup:(id)arg1;
- (id)init;

@end
