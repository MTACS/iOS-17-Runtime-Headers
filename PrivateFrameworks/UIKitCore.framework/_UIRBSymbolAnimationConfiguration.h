
@interface _UIRBSymbolAnimationConfiguration : NSObject {
    unsigned int  _animation;
    NSDictionary * _options;
}

@property (nonatomic) unsigned int animation;
@property (nonatomic, retain) NSDictionary *options;

- (void).cxx_destruct;
- (unsigned int)animation;
- (id)options;
- (void)setAnimation:(unsigned int)arg1;
- (void)setOptions:(id)arg1;

@end
