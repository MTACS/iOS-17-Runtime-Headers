
@interface SUScrollRequest : NSObject {
    bool  _animated;
    id /* block */  _completionHandler;
    NSValue * _contentOffsetValue;
    NSValue * _frameValue;
}

@property (getter=isAnimated, nonatomic) bool animated;
@property (nonatomic, copy) id /* block */ completionHandler;
@property (retain) NSValue *contentOffsetValue;
@property (retain) NSValue *frameValue;

- (id /* block */)completionHandler;
- (id)contentOffsetValue;
- (void)dealloc;
- (id)frameValue;
- (bool)isAnimated;
- (void)setAnimated:(bool)arg1;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setContentOffsetValue:(id)arg1;
- (void)setFrameValue:(id)arg1;

@end
