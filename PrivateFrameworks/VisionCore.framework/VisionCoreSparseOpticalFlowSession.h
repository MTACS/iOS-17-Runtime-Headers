
@interface VisionCoreSparseOpticalFlowSession : NSObject {
    struct vector<__fp16, std::allocator<__fp16>> { 
        /* Warning: Unrecognized filer type: ' ' using 'void*' */ void**__begin_; 
        void**__end_; 
        struct __compressed_pair<__fp16 *, std::allocator<__fp16>> { 
            void**__value_; 
        } __end_cap_; 
    }  _allDstPoints;
    struct vector<__fp16, std::allocator<__fp16>> { 
        /* Warning: Unrecognized filer type: ' ' using 'void*' */ void**__begin_; 
        void**__end_; 
        struct __compressed_pair<__fp16 *, std::allocator<__fp16>> { 
            void**__value_; 
        } __end_cap_; 
    }  _allSrcPoints;
    VisionCoreSparseOpticalFlowResult * _debuggingMemoryResult;
    VisionCoreSparseOpticalFlowResult * _debuggingResult;
    unsigned long long  _frameCountSinceLastGrouping;
    struct vector<__fp16, std::allocator<__fp16>> { 
        /* Warning: Unrecognized filer type: ' ' using 'void*' */ void**__begin_; 
        void**__end_; 
        struct __compressed_pair<__fp16 *, std::allocator<__fp16>> { 
            void**__value_; 
        } __end_cap_; 
    }  _groupingMemoryDstPoints;
    NSMutableArray * _groupingMemoryQuadIDs;
    struct vector<unsigned long, std::allocator<unsigned long>> { 
        unsigned long long *__begin_; 
        unsigned long long *__end_; 
        struct __compressed_pair<unsigned long *, std::allocator<unsigned long>> { 
            unsigned long long *__value_; 
        } __end_cap_; 
    }  _groupingMemoryQuadPointsCounts;
    struct vector<__fp16, std::allocator<__fp16>> { 
        /* Warning: Unrecognized filer type: ' ' using 'void*' */ void**__begin_; 
        void**__end_; 
        struct __compressed_pair<__fp16 *, std::allocator<__fp16>> { 
            void**__value_; 
        } __end_cap_; 
    }  _groupingMemorySrcPoints;
    LKTSparseGPU * _lktSparseGPUContext;
    VisionCoreMetalContext * _mtlContext;
    struct __CVBuffer { } * _prevFrame;
    struct vector<unsigned long, std::allocator<unsigned long>> { 
        unsigned long long *__begin_; 
        unsigned long long *__end_; 
        struct __compressed_pair<unsigned long *, std::allocator<unsigned long>> { 
            unsigned long long *__value_; 
        } __end_cap_; 
    }  _quadPointCounts;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[3]; 
    }  _sceneHomography;
    NSMutableDictionary * _tQuadsTfx;
    <MTLTexture> * _texture;
    NSMutableArray * _trackedQuads;
}

@property (nonatomic) void*allDstPoints;
@property (nonatomic) void*allSrcPoints;
@property (nonatomic, retain) VisionCoreSparseOpticalFlowResult *debuggingMemoryResult;
@property (nonatomic, retain) VisionCoreSparseOpticalFlowResult *debuggingResult;
@property unsigned long long frameCountSinceLastGrouping;
@property (nonatomic) void*groupingMemoryDstPoints;
@property (nonatomic, retain) NSMutableArray *groupingMemoryQuadIDs;
@property (nonatomic) void*groupingMemoryQuadPointsCounts;
@property (nonatomic) void*groupingMemorySrcPoints;
@property (retain) LKTSparseGPU *lktSparseGPUContext;
@property (readonly) VisionCoreMetalContext *mtlContext;
@property (nonatomic, readonly) struct __CVBuffer { }*prevFrame;
@property (nonatomic) void*quadPointCounts;
@property (nonatomic) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; } sceneHomography;
@property (nonatomic, retain) NSMutableDictionary *tQuadsTfx;
@property (nonatomic, readonly) <MTLTexture> *texture;
@property (nonatomic, retain) NSMutableArray *trackedQuads;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void*)allDstPoints;
- (void*)allSrcPoints;
- (void)dealloc;
- (id)debuggingMemoryResult;
- (id)debuggingResult;
- (int)findClosestQuadIndex:(int)arg1 candidateIndices:(struct vector<int, std::allocator<int>> { int *x1; int *x2; struct __compressed_pair<int *, std::allocator<int>> { int *x_3_1_1; } x3; })arg2;
- (unsigned long long)frameCountSinceLastGrouping;
- (void*)groupingMemoryDstPoints;
- (id)groupingMemoryQuadIDs;
- (void*)groupingMemoryQuadPointsCounts;
- (void*)groupingMemorySrcPoints;
- (id)init;
- (id)lktSparseGPUContext;
- (void)moveMemoryKeypointsToSessionKpts;
- (id)mtlContext;
- (struct __CVBuffer { }*)prevFrame;
- (void*)quadPointCounts;
- (void)resetGroupingMemory;
- (void)saveCurrentMatchingToMemoryMatchCounts:(struct vector<unsigned long, std::allocator<unsigned long>> { unsigned long long *x1; unsigned long long *x2; struct __compressed_pair<unsigned long *, std::allocator<unsigned long>> { unsigned long long *x_3_1_1; } x3; })arg1;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })sceneHomography;
- (void)setAllDstPoints:(void*)arg1;
- (void)setAllSrcPoints:(void*)arg1;
- (void)setDebuggingMemoryResult:(id)arg1;
- (void)setDebuggingResult:(id)arg1;
- (void)setFrameCountSinceLastGrouping:(unsigned long long)arg1;
- (void)setGroupingMemoryDstPoints:(void*)arg1;
- (void)setGroupingMemoryQuadIDs:(id)arg1;
- (void)setGroupingMemoryQuadPointsCounts:(void*)arg1;
- (void)setGroupingMemorySrcPoints:(void*)arg1;
- (void)setLktSparseGPUContext:(id)arg1;
- (void)setQuadPointCounts:(void*)arg1;
- (void)setSceneHomography:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })arg1;
- (void)setTQuadsTfx:(id)arg1;
- (void)setTrackedQuads:(id)arg1;
- (id)tQuadsTfx;
- (id)texture;
- (id)trackedQuads;
- (unsigned long long)updateKeypointsWithOpticalFlowResultsSourceBuffer:(const /* Warning: Unrecognized filer type: ' ' using 'void*' */ void**)arg1 destBuffer:(const /* Warning: Unrecognized filer type: ' ' using 'void*' */ void**)arg2 matchBuffer:(const bool*)arg3 matchCount:(void*)arg4;
- (void)updateMemoryKeypointsWithOpticalFlowResultsSourceBuffer:(const /* Warning: Unrecognized filer type: ' ' using 'void*' */ void**)arg1 destBuffer:(const /* Warning: Unrecognized filer type: ' ' using 'void*' */ void**)arg2 matchBuffer:(const bool*)arg3 start:(unsigned long long)arg4;
- (void)updateReferenceTexture:(id)arg1 frame:(struct __CVBuffer { }*)arg2;

@end
