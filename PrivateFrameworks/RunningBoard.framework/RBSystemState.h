
@interface RBSystemState : NSObject <NSCopying, NSMutableCopying> {
    NSMutableSet * _allowLaunchPredicates;
    NSMutableDictionary * _conditions;
    bool  _preventIdleSleep;
    NSMutableSet * _preventIdleSleepIdentifiers;
    bool  _preventLaunch;
    NSMutableSet * _preventLaunchPredicates;
    NSMutableDictionary * _prewarmConfiguration;
    NSMutableSet * _tags;
}

@property (nonatomic, readonly, copy) NSSet *allowLaunchPredicates;
@property (nonatomic, readonly, copy) NSDictionary *conditions;
@property (nonatomic, readonly) bool preventIdleSleep;
@property (nonatomic, readonly) NSSet *preventIdleSleepIdentifiers;
@property (nonatomic, readonly) bool preventLaunch;
@property (nonatomic, readonly, copy) NSSet *preventLaunchPredicates;
@property (nonatomic, readonly, copy) NSDictionary *prewarmConfiguration;
@property (nonatomic, readonly, copy) NSSet *tags;

- (void).cxx_destruct;
- (id)_init;
- (id)allowLaunchPredicates;
- (id)conditions;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (bool)preventIdleSleep;
- (id)preventIdleSleepIdentifiers;
- (bool)preventLaunch;
- (id)preventLaunchPredicates;
- (id)prewarmConfiguration;
- (id)tags;

@end
