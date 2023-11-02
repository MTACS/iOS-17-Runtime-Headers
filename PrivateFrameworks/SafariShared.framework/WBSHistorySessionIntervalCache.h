
@interface WBSHistorySessionIntervalCache : NSObject {
    NSCalendar * _calendar;
    struct Vector<double, 0UL, WTF::CrashOnOverflow, 16UL, WTF::FastMalloc> { 
        double *m_buffer; 
        unsigned int m_capacity; 
        unsigned int m_size; 
    }  _intervalCache;
    NSObject<OS_dispatch_queue> * _queue;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (double)_beginningOfSessionContainingTime:(double)arg1;
- (void)_getSessionIntervalForTime:(double)arg1 beginningOfDay:(double*)arg2 beginningOfNextDay:(double*)arg3;
- (double)beginningOfSessionContainingTime:(double)arg1;
- (id)init;
- (id)initWithCalendar:(id)arg1;

@end
