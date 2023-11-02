
@interface ICASPdfNavIxData : NSObject <AADataEventType> {
    NSNumber * _hasGestures;
    NSNumber * _hasPagination;
    NSNumber * _hasPinchToExpandState;
    NSNumber * _hasPinchZoom;
    NSNumber * _hasScroll;
}

@property (nonatomic, readonly) NSNumber *hasGestures;
@property (nonatomic, readonly) NSNumber *hasPagination;
@property (nonatomic, readonly) NSNumber *hasPinchToExpandState;
@property (nonatomic, readonly) NSNumber *hasPinchZoom;
@property (nonatomic, readonly) NSNumber *hasScroll;

+ (id)dataName;

- (void).cxx_destruct;
- (id)hasGestures;
- (id)hasPagination;
- (id)hasPinchToExpandState;
- (id)hasPinchZoom;
- (id)hasScroll;
- (id)initWithHasGestures:(id)arg1 hasScroll:(id)arg2 hasPagination:(id)arg3 hasPinchZoom:(id)arg4 hasPinchToExpandState:(id)arg5;
- (id)toDict;

@end
