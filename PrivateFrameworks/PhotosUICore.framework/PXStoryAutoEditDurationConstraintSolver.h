
@interface PXStoryAutoEditDurationConstraintSolver : NSObject {
    struct vector<PFStoryDurationInfo, std::allocator<PFStoryDurationInfo>> { 
        struct { /* ? */ } *__begin_; 
        struct { /* ? */ } *__end_; 
        struct __compressed_pair<PFStoryDurationInfo *, std::allocator<PFStoryDurationInfo>> { 
            struct { /* ? */ } *__value_; 
        } __end_cap_; 
    }  _infos;
    NSObject<OS_os_log> * _log;
    struct vector<PFStoryDurationInfo, std::allocator<PFStoryDurationInfo>> { 
        struct { /* ? */ } *__begin_; 
        struct { /* ? */ } *__end_; 
        struct __compressed_pair<PFStoryDurationInfo *, std::allocator<PFStoryDurationInfo>> { 
            struct { /* ? */ } *__value_; 
        } __end_cap_; 
    }  _solveResults;
}

@property (nonatomic, readonly) struct { long long x1; struct { struct { long long x_1_2_1; int x_1_2_2; unsigned int x_1_2_3; long long x_1_2_4; } x_2_1_1; struct { long long x_2_2_1; int x_2_2_2; unsigned int x_2_2_3; long long x_2_2_4; } x_2_1_2; struct { long long x_3_2_1; int x_3_2_2; unsigned int x_3_2_3; long long x_3_2_4; } x_2_1_3; } x2; } constrainedOverallDurationInfo;
@property (nonatomic, readonly) unsigned long long count;
@property (nonatomic, readonly) struct { long long x1; struct { struct { long long x_1_2_1; int x_1_2_2; unsigned int x_1_2_3; long long x_1_2_4; } x_2_1_1; struct { long long x_2_2_1; int x_2_2_2; unsigned int x_2_2_3; long long x_2_2_4; } x_2_1_2; struct { long long x_3_2_1; int x_3_2_2; unsigned int x_3_2_3; long long x_3_2_4; } x_2_1_3; } x2; } originalOverallDurationInfo;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addClipWithDurationInfo:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; struct { long long x_3_1_1; int x_3_1_2; unsigned int x_3_1_3; long long x_3_1_4; } x3; })arg1;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; struct { long long x_3_1_1; int x_3_1_2; unsigned int x_3_1_3; long long x_3_1_4; } x3; })constrainedDurationInfoAtIndex:(unsigned long long)arg1;
- (struct { long long x1; struct { struct { long long x_1_2_1; int x_1_2_2; unsigned int x_1_2_3; long long x_1_2_4; } x_2_1_1; struct { long long x_2_2_1; int x_2_2_2; unsigned int x_2_2_3; long long x_2_2_4; } x_2_1_2; struct { long long x_3_2_1; int x_3_2_2; unsigned int x_3_2_3; long long x_3_2_4; } x_2_1_3; } x2; })constrainedOverallDurationInfo;
- (unsigned long long)count;
- (id)diagnosticSwiftCodeForDurationUnitTestNamed:(id)arg1 maximumDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (id)diagnosticSwiftCodeForDurationUnitTestNamed:(id)arg1 preferredDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (id)init;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; struct { long long x_3_1_1; int x_3_1_2; unsigned int x_3_1_3; long long x_3_1_4; } x3; })originalDurationInfoAtIndex:(unsigned long long)arg1;
- (struct { long long x1; struct { struct { long long x_1_2_1; int x_1_2_2; unsigned int x_1_2_3; long long x_1_2_4; } x_2_1_1; struct { long long x_2_2_1; int x_2_2_2; unsigned int x_2_2_3; long long x_2_2_4; } x_2_1_2; struct { long long x_3_2_1; int x_3_2_2; unsigned int x_3_2_3; long long x_3_2_4; } x_2_1_3; } x2; })originalOverallDurationInfo;
- (bool)solveForMaximumDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (bool)solveForPreferredDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;

@end
