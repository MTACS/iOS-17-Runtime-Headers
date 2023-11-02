
@interface CSComplicationLayout : NSObject {
    long long  _draggedItemInsertionIndex;
    NSDictionary * _framesByElement;
}

@property (nonatomic, readonly) long long draggedItemInsertionIndex;
@property (nonatomic, readonly) NSDictionary *framesByElement;

- (void).cxx_destruct;
- (id)_initWithFramesByElement:(id)arg1 draggedItemInsertionIndex:(long long)arg2;
- (long long)draggedItemInsertionIndex;
- (id)framesByElement;

@end
