
@interface RSOrthographicDetector : NSObject {
    struct vector<std::vector<std::vector<std::vector<std::vector<float>>>>, std::allocator<std::vector<std::vector<std::vector<std::vector<float>>>>>> { 
        void *__begin_; 
        void *__end_; 
        struct __compressed_pair<std::vector<std::vector<std::vector<std::vector<float>>>> *, std::allocator<std::vector<std::vector<std::vector<std::vector<float>>>>>> { 
            void *__value_; 
        } __end_cap_; 
    }  _anchorBoxes;
    NSArray * _boxes;
    void * _ctx;
    NSMutableArray * _curvedDoors;
    NSMutableArray * _curvedWindows;
    float  _defaultBoxSizes;
    struct vector<float, std::allocator<float>> { 
        float *__begin_; 
        float *__end_; 
        struct __compressed_pair<float *, std::allocator<float>> { 
            float *__value_; 
        } __end_cap_; 
    }  _defaultBoxStrides;
    NSMutableArray * _doors;
    const float * _filterThresholds;
    struct vector<int, std::allocator<int>> { 
        int *__begin_; 
        int *__end_; 
        struct __compressed_pair<int *, std::allocator<int>> { 
            int *__value_; 
        } __end_cap_; 
    }  _importantClasses;
    struct __IOSurface { } * _ioSurface;
    bool  _isOnline;
    struct vector<std::vector<float>, std::allocator<std::vector<float>>> { 
        void *__begin_; 
        void *__end_; 
        struct __compressed_pair<std::vector<float> *, std::allocator<std::vector<float>>> { 
            void *__value_; 
        } __end_cap_; 
    }  _logitsMap;
    struct __CVBuffer {} * _logitsMapBuffers;
    struct __IOSurface {} * _logitsMapIoSurfaces;
    struct { 
        void *plan; 
        int network_index; 
    }  _net;
    struct vector<std::vector<float>, std::allocator<std::vector<float>>> { 
        void *__begin_; 
        void *__end_; 
        struct __compressed_pair<std::vector<float> *, std::allocator<std::vector<float>>> { 
            void *__value_; 
        } __end_cap_; 
    }  _offsetsMap;
    struct __CVBuffer {} * _offsetsMapBuffers;
    struct __IOSurface {} * _offsetsMapIoSurfaces;
    NSMutableArray * _opendoors;
    NSMutableArray * _openings;
    void * _plan;
    float  _scale;
    /* Warning: Unrecognized filer type: ' ' using 'void*' */ void** _semanticMap;
    struct __CVBuffer { } * _semanticMapBuffer;
    float  _shift;
    struct vector<float, std::allocator<float>> { 
        float *__begin_; 
        float *__end_; 
        struct __compressed_pair<float *, std::allocator<float>> { 
            float *__value_; 
        } __end_cap_; 
    }  _softmaxBuffer;
    NSMutableArray * _windows;
    bool  normalizedOutput;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
- (id)init;

@end
