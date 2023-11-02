
@interface ARUICelebration : NSObject <NSCopying> {
    double  _duration;
    _TtC3VFX8VFXScene * _scene;
    unsigned long long  _type;
}

@property (nonatomic, readonly) double duration;
@property (nonatomic, readonly) _TtC3VFX8VFXScene *scene;
@property (nonatomic, readonly) unsigned long long type;

- (void).cxx_destruct;
- (void)apply:(id)arg1 context:(id)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (double)duration;
- (unsigned long long)hash;
- (id)scene;
- (unsigned long long)type;
- (void)updateDeltaTime:(double)arg1;

@end
