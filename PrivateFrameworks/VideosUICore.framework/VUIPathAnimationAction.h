
@interface VUIPathAnimationAction : NSObject <CAAction> {
    CABasicAnimation * _animationToRun;
    struct CGPath { } * _fromPath;
    NSString * _key;
}

@property (nonatomic, retain) CABasicAnimation *animationToRun;
@property (nonatomic) struct CGPath { }*fromPath;
@property (nonatomic, retain) NSString *key;

- (void).cxx_destruct;
- (id)animationToRun;
- (void)dealloc;
- (struct CGPath { }*)fromPath;
- (id)key;
- (void)runActionForKey:(id)arg1 object:(id)arg2 arguments:(id)arg3;
- (void)setAnimationToRun:(id)arg1;
- (void)setFromPath:(struct CGPath { }*)arg1;
- (void)setKey:(id)arg1;

@end
