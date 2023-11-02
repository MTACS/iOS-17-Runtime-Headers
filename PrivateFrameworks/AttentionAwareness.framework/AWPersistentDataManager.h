
@interface AWPersistentDataManager : NSObject {
    unsigned long long  _loadAbsTime;
    NSObject<OS_dispatch_queue> * _queue;
    void * _shm_obj;
    NSObject<OS_dispatch_source> * _timer;
}

+ (bool)AWPersistentDataExists:(int*)arg1;
+ (void)initAWPersistentDataHeader:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; struct { struct { double x_1_2_1; unsigned long long x_1_2_2; unsigned long long x_1_2_3; unsigned long long x_1_2_4; unsigned long long x_1_2_5; unsigned long long x_1_2_6; unsigned long long x_1_2_7; unsigned long long x_1_2_8; bool x_1_2_9; bool x_1_2_10; bool x_1_2_11; } x_5_1_1; unsigned long long x_5_1_2; int x_5_1_3; int x_5_1_4; } x5[0]; }*)arg1;
+ (id)sharedManager;
+ (bool)truncateAWPersistentData:(int*)arg1 error:(id*)arg2;
+ (bool)validateAWPersistentDataHeader:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; struct { struct { double x_1_2_1; unsigned long long x_1_2_2; unsigned long long x_1_2_3; unsigned long long x_1_2_4; unsigned long long x_1_2_5; unsigned long long x_1_2_6; unsigned long long x_1_2_7; unsigned long long x_1_2_8; bool x_1_2_9; bool x_1_2_10; bool x_1_2_11; } x_5_1_1; unsigned long long x_5_1_2; int x_5_1_3; int x_5_1_4; } x5[0]; }*)arg1;

- (void).cxx_destruct;
- (bool)checkPreconditions:(id*)arg1;
- (struct { double x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; bool x9; bool x10; bool x11; }*)clientStateWithConnection:(id)arg1 index:(int)arg2 error:(id*)arg3;
- (bool)closeWithConnection:(id)arg1 index:(int)arg2 error:(id*)arg3;
- (id)init;
- (bool)isValidIndexForConnection:(id)arg1 index:(int)arg2 error:(id*)arg3;
- (void)loadPersistentData;
- (int)nextFreeIndex;
- (int)openWithConnection:(id)arg1 error:(id*)arg2;

@end
