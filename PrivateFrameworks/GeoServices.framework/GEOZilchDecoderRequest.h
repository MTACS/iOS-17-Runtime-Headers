
@interface GEOZilchDecoderRequest : GEOMapRequest {
    GEOZilchDecoder * _decoder;
    id /* block */  _errorHandler;
    NSObject<OS_dispatch_semaphore> * _finishedSemaphore;
    NSError * _firstTileLoadingError;
    struct unique_ptr<geo::ZilchMapModel, std::default_delete<geo::ZilchMapModel>> { 
        struct __compressed_pair<geo::ZilchMapModel *, std::default_delete<geo::ZilchMapModel>> { 
            struct ZilchMapModel {} *__value_; 
        } __ptr_; 
    }  _mapModel;
    struct shared_ptr<zilch::Message> { 
        struct Message {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _message;
    id /* block */  _pathHandler;
}

@property (copy) id /* block */ errorHandler;
@property (copy) id /* block */ pathHandler;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_finishedDecodingWithPath:(struct Path<std::shared_ptr<geo::MapEdge>> { struct GeoCoordinates { struct Longitude { unsigned int x_1_2_1; } x_1_1_1; struct Latitude { unsigned int x_2_2_1; } x_1_1_2; int x_1_1_3; } x1; struct GeoCoordinates { struct Longitude { unsigned int x_1_2_1; } x_2_1_1; struct Latitude { unsigned int x_2_2_1; } x_2_1_2; int x_2_1_3; } x2; struct vector<zilch::RoadPathElement<std::shared_ptr<geo::MapEdge>>, std::allocator<zilch::RoadPathElement<std::shared_ptr<geo::MapEdge>>>> { void *x_3_1_1; void *x_3_1_2; struct __compressed_pair<zilch::RoadPathElement<std::shared_ptr<geo::MapEdge>> *, std::allocator<zilch::RoadPathElement<std::shared_ptr<geo::MapEdge>>>> { void *x_3_2_1; } x_3_1_3; } x3; struct vector<zilch::GeometryPathElement, std::allocator<zilch::GeometryPathElement>> { struct GeometryPathElement {} *x_4_1_1; struct GeometryPathElement {} *x_4_1_2; struct __compressed_pair<zilch::GeometryPathElement *, std::allocator<zilch::GeometryPathElement>> { struct GeometryPathElement {} *x_3_2_1; } x_4_1_3; } x4; struct vector<zilch::Path<std::shared_ptr<geo::MapEdge>>::Entry, std::allocator<zilch::Path<std::shared_ptr<geo::MapEdge>>::Entry>> { struct Entry {} *x_5_1_1; struct Entry {} *x_5_1_2; struct __compressed_pair<zilch::Path<std::shared_ptr<geo::MapEdge>>::Entry *, std::allocator<zilch::Path<std::shared_ptr<geo::MapEdge>>::Entry>> { struct Entry {} *x_3_2_1; } x_5_1_3; } x5; })arg1;
- (void)cancel;
- (void)decodeWithPathHandler:(id /* block */)arg1 errorHandler:(id /* block */)arg2;
- (id /* block */)errorHandler;
- (id)initWithDecoder:(id)arg1 message:(struct shared_ptr<zilch::Message> { struct Message {} *x1; struct __shared_weak_count {} *x2; })arg2;
- (id /* block */)pathHandler;
- (void)setErrorHandler:(id /* block */)arg1;
- (void)setPathHandler:(id /* block */)arg1;

@end
