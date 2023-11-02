
@interface DBTodayViewSynchronizedAnimation : NSObject {
    id /* block */  _animationBlock;
    id  _client;
    bool  _ready;
}

@property (nonatomic, copy) id /* block */ animationBlock;
@property (nonatomic, retain) id client;
@property (nonatomic) bool ready;

- (void).cxx_destruct;
- (id /* block */)animationBlock;
- (id)client;
- (id)description;
- (bool)ready;
- (void)setAnimationBlock:(id /* block */)arg1;
- (void)setClient:(id)arg1;
- (void)setReady:(bool)arg1;

@end
