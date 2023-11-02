
@interface _UIImageViewSymbolEffectEntry : NSObject {
    bool  _animated;
    id /* block */  _completionHandler;
    NSSymbolEffectOptions * _options;
    NSSymbolEffect * _symbolEffect;
}

@property (nonatomic) bool animated;
@property (nonatomic, copy) id /* block */ completionHandler;
@property (nonatomic, retain) NSSymbolEffectOptions *options;
@property (nonatomic, retain) NSSymbolEffect *symbolEffect;

- (void).cxx_destruct;
- (bool)animated;
- (id /* block */)completionHandler;
- (id)options;
- (void)setAnimated:(bool)arg1;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setOptions:(id)arg1;
- (void)setSymbolEffect:(id)arg1;
- (id)symbolEffect;

@end
