
@interface NTKFaceColorPaletteInspector : NSObject {
    NSBundle * _bundleLocation;
    UIColor * _color;
    NSString * _domain;
    NSString * _fallbackMethodName;
    bool  _isTritium;
    NSString * _pathLocation;
    NSString * _pigmentName;
    NSString * _propertyName;
}

@property (nonatomic, retain) NSBundle *bundleLocation;
@property (nonatomic, retain) UIColor *color;
@property (nonatomic, retain) NSString *domain;
@property (nonatomic, retain) NSString *fallbackMethodName;
@property (nonatomic) bool isTritium;
@property (nonatomic, retain) NSString *pathLocation;
@property (nonatomic, retain) NSString *pigmentName;
@property (nonatomic, retain) NSString *propertyName;

- (void).cxx_destruct;
- (id)bundleLocation;
- (id)color;
- (id)description;
- (id)domain;
- (id)fallbackMethodName;
- (bool)isTritium;
- (id)pathLocation;
- (id)pigmentName;
- (id)propertyName;
- (void)setBundleLocation:(id)arg1;
- (void)setColor:(id)arg1;
- (void)setDomain:(id)arg1;
- (void)setFallbackMethodName:(id)arg1;
- (void)setIsTritium:(bool)arg1;
- (void)setPathLocation:(id)arg1;
- (void)setPigmentName:(id)arg1;
- (void)setPropertyName:(id)arg1;

@end
