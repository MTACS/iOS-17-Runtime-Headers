
@interface BKSRestartAction : BSAction

@property (nonatomic, readonly) unsigned long long options;

+ (id)actionWithOptions:(unsigned long long)arg1;

- (unsigned long long)options;

@end
