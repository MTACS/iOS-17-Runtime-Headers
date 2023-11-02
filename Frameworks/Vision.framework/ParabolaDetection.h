
@interface ParabolaDetection : NSObject {
    int  UID_counter;
    struct ForestAlgoParams { 
        float FAFrameRate; 
        int parabolaLength; 
        int minXDistanceFromLastPointOnParabola; 
        int maxXDistanceFromLastPointOnParabola; 
        int minYDistanceFromLastPointOnParabola; 
        int maxYDistanceFromLastPointOnParabola; 
        int maxFramesSkippedToContinueParabolaDetection; 
        int minObjectSize; 
    }  _forestAlgoParams;
    struct map<int, ObservedParabola, std::less<int>, std::allocator<std::pair<const int, ObservedParabola>>> { 
        struct __tree<std::__value_type<int, ObservedParabola>, std::__map_value_compare<int, std::__value_type<int, ObservedParabola>, std::less<int>>, std::allocator<std::__value_type<int, ObservedParabola>>> { 
            void *__begin_node_; 
            struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<int, ObservedParabola>, void *>>> { 
                struct __tree_end_node<std::__tree_node_base<void *> *> { 
                    void *__left_; 
                } __value_; 
            } __pair1_; 
            struct __compressed_pair<unsigned long, std::__map_value_compare<int, std::__value_type<int, ObservedParabola>, std::less<int>>> { 
                unsigned long long __value_; 
            } __pair3_; 
        } __tree_; 
    }  _observedParabolas;
    struct map<int, InternalObservedParabola, std::less<int>, std::allocator<std::pair<const int, InternalObservedParabola>>> { 
        struct __tree<std::__value_type<int, InternalObservedParabola>, std::__map_value_compare<int, std::__value_type<int, InternalObservedParabola>, std::less<int>>, std::allocator<std::__value_type<int, InternalObservedParabola>>> { 
            void *__begin_node_; 
            struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<int, InternalObservedParabola>, void *>>> { 
                struct __tree_end_node<std::__tree_node_base<void *> *> { 
                    void *__left_; 
                } __value_; 
            } __pair1_; 
            struct __compressed_pair<unsigned long, std::__map_value_compare<int, std::__value_type<int, InternalObservedParabola>, std::less<int>>> { 
                unsigned long long __value_; 
            } __pair3_; 
        } __tree_; 
    }  internalParabolas;
    struct InternalParameters { 
        int minRegionSizeX; 
        int minRegionSizeY; 
        float initialYDiffLimit; 
        float startingMinDiffDeviation; 
        float maxDistanceForSolution; 
        int frameWidth; 
        int frameHeight; 
        float xScaleFactor; 
        float yScaleFactor; 
        int runningMinDiffDeviation; 
        float maxFrameSkipScaleFactor; 
        float majorAxisScaler; 
        float minorAxisScalar; 
        float contourSizeUpperBound; 
        float contourSizeLowerBound; 
        float maxRadiusToCompensate; 
        float maxRadiusBasedDeviation; 
        float xConsistencyDeviation; 
        float rejectionScaler; 
    }  internalParams;
    struct ParabolaSearchBuffer { 
        int maxFramesSkippedForDetection; 
        int minRegionSizeX; 
        int minRegionSizeY; 
        struct deque<std::vector<CGPointWithPts>, std::allocator<std::vector<CGPointWithPts>>> { 
            struct __split_buffer<std::vector<CGPointWithPts> *, std::allocator<std::vector<CGPointWithPts> *>> { 
                void **__first_; 
                void **__begin_; 
                void **__end_; 
                struct __compressed_pair<std::vector<CGPointWithPts> **, std::allocator<std::vector<CGPointWithPts> *>> { 
                    void **__value_; 
                } __end_cap_; 
            } __map_; 
            unsigned long long __start_; 
            struct __compressed_pair<unsigned long, std::allocator<std::vector<CGPointWithPts>>> { 
                unsigned long long __value_; 
            } __size_; 
        } contourPointsQ; 
    }  parabolaSearchBuffer;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)init;

@end
