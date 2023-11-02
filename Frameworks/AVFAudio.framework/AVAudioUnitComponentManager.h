
@interface AVAudioUnitComponentManager : NSObject {
    void * _impl;
}

@property (nonatomic, readonly) NSArray *standardLocalizedTagNames;
@property (nonatomic, readonly) NSArray *tagNames;

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (void)privateAllocInitSingleton;
+ (id)sharedAudioUnitComponentManager;

- (id)componentsMatchingDescription:(struct AudioComponentDescription { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; })arg1;
- (id)componentsMatchingPredicate:(id)arg1;
- (id)componentsPassingTest:(id /* block */)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (void)localeChanged:(id)arg1;
- (void)registrationsChanged:(id)arg1;
- (id)standardLocalizedTagNames;
- (id)tagNames;

@end
