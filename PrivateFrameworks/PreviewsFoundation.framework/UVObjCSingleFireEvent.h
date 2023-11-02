
@interface UVObjCSingleFireEvent : NSObject {
    _TtC18PreviewsFoundation19ObjcSingleFireEvent * _event;
}

@property (nonatomic, readonly) bool hasFired;

- (void).cxx_destruct;
- (void)addObserver:(id /* block */)arg1;
- (void)cancel;
- (void)fire;
- (bool)hasFired;
- (id)init;

@end
