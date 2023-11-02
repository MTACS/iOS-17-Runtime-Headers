
@interface PRPosterContentGradientStyle : NSObject <PRPosterContentStyle, PRPosterContentStylePrivate> {
    NSArray * _colors;
    struct CGPoint { 
        double x; 
        double y; 
    }  _endPoint;
    unsigned long long  _gradientType;
    NSArray * _locations;
    struct CGPoint { 
        double x; 
        double y; 
    }  _startPoint;
}

@property (nonatomic, readonly) bool allowsVariation;
@property (nonatomic, readonly, copy) NSArray *colors;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool desiresVibrancyEffectView;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } endPoint;
@property (nonatomic, readonly) unsigned long long gradientType;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly) bool isSupportedBackgroundStyle;
@property (nonatomic, readonly) bool isSupportedSystemStyle;
@property (nonatomic, readonly, copy) NSString *localizedName;
@property (nonatomic, readonly, copy) NSArray *locations;
@property (nonatomic, readonly, copy) NSString *lutIdentifier;
@property (nonatomic, readonly, copy) NSString *nonVariatedIdentifier;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } startPoint;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long type;
@property (nonatomic, readonly, copy) UIColor *vibrancyEffectColor;
@property (nonatomic, readonly) long long vibrancyEffectType;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)allowsVariation;
- (void)applyStyleWithRenderer:(id)arg1;
- (id)colors;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)desiresVibrancyEffectView;
- (void)encodeWithCoder:(id)arg1;
- (struct CGPoint { double x1; double x2; })endPoint;
- (unsigned long long)gradientType;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithColors:(id)arg1;
- (id)initWithColors:(id)arg1 gradientType:(unsigned long long)arg2 locations:(id)arg3 startPoint:(struct CGPoint { double x1; double x2; })arg4 endPoint:(struct CGPoint { double x1; double x2; })arg5;
- (bool)isSupportedBackgroundStyle;
- (bool)isSupportedSystemStyle;
- (id)localizedName;
- (id)locations;
- (id)lutIdentifier;
- (id)nonVariatedIdentifier;
- (struct CGPoint { double x1; double x2; })startPoint;
- (unsigned long long)type;
- (id)vibrancyEffectColor;
- (long long)vibrancyEffectType;

@end
