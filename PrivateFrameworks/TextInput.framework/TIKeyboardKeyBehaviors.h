
@interface TIKeyboardKeyBehaviors : NSObject {
    unsigned long long  _returnKeyBehavior;
    unsigned long long  _spaceKeyBehavior;
    unsigned long long  _tabKeyBehavior;
}

@property (nonatomic) unsigned long long returnKeyBehavior;
@property (nonatomic) unsigned long long spaceKeyBehavior;
@property (nonatomic) unsigned long long tabKeyBehavior;

+ (id)behaviorForSpaceKey:(unsigned long long)arg1 forReturnKey:(unsigned long long)arg2;
+ (id)behaviorForSpaceKey:(unsigned long long)arg1 forReturnKey:(unsigned long long)arg2 forTabKey:(unsigned long long)arg3;

- (id)initWithSpaceKeyBehavior:(unsigned long long)arg1 returnKeyBehavior:(unsigned long long)arg2 tabKeyBehavior:(unsigned long long)arg3;
- (unsigned long long)returnKeyBehavior;
- (void)setReturnKeyBehavior:(unsigned long long)arg1;
- (void)setSpaceKeyBehavior:(unsigned long long)arg1;
- (void)setTabKeyBehavior:(unsigned long long)arg1;
- (unsigned long long)spaceKeyBehavior;
- (unsigned long long)tabKeyBehavior;

@end
