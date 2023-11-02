
@interface BLSHSceneEnvironmentObserverToken : NSObject <NSCopying> {
    <BLSHSceneEnvironmentObserving> * _observer;
    <NSObject><NSCopying> * _sceneIdentityToken;
}

+ (id)tokenWithObserver:(id)arg1 sceneIdentityToken:(id)arg2;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)initWithObserver:(id)arg1 sceneIdentityToken:(id)arg2;
- (bool)isEqual:(id)arg1;

@end
