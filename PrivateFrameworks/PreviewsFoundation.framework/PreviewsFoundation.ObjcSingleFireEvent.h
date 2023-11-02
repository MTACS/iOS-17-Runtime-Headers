
@interface PreviewsFoundation.ObjcSingleFireEvent : NSObject {
    void event;
}

@property (nonatomic, readonly) bool hasFired;

- (void).cxx_destruct;
- (void)addObserver:(id /* block */)arg1;
- (void)cancel;
- (void)fire;
- (bool)hasFired;
- (id)init;

@end
