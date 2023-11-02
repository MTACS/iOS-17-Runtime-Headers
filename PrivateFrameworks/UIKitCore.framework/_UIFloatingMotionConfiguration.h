
@interface _UIFloatingMotionConfiguration : NSObject <NSCopying> {
    struct CGPoint { 
        double x; 
        double y; 
    }  _rotation;
    struct CGPoint { 
        double x; 
        double y; 
    }  _translation;
}

@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } rotation;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } translation;

+ (id)configurationWithLargeTranslationOnAxis:(unsigned long long)arg1;
+ (id)configurationWithRotation:(struct CGPoint { double x1; double x2; })arg1;
+ (id)configurationWithRotationOnAxis:(unsigned long long)arg1;
+ (id)configurationWithTranslation:(struct CGPoint { double x1; double x2; })arg1;
+ (id)configurationWithTranslationOnAxis:(unsigned long long)arg1;

- (id)_initWithTranslation:(struct CGPoint { double x1; double x2; })arg1 rotation:(struct CGPoint { double x1; double x2; })arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (struct CGPoint { double x1; double x2; })rotation;
- (struct CGPoint { double x1; double x2; })translation;

@end
