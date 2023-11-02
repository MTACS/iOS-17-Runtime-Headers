
@interface UISymbolEffectCompletionContext : NSObject {
    NSSymbolContentTransition * _contentTransition;
    NSSymbolEffect * _effect;
    bool  _finished;
    id  _sender;
}

@property (nonatomic, retain) NSSymbolContentTransition *contentTransition;
@property (nonatomic, retain) NSSymbolEffect *effect;
@property (getter=isFinished, nonatomic) bool finished;
@property (nonatomic) id sender;

+ (id)_new;

- (void).cxx_destruct;
- (id)_init;
- (id)contentTransition;
- (id)effect;
- (bool)isFinished;
- (id)sender;
- (void)setContentTransition:(id)arg1;
- (void)setEffect:(id)arg1;
- (void)setFinished:(bool)arg1;
- (void)setSender:(id)arg1;

@end
