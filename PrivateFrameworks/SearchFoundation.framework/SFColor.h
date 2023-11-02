
@interface SFColor : NSObject <NSCopying, NSSecureCoding, SFColor> {
    double  _alphaComponent;
    double  _blueComponent;
    int  _colorTintStyle;
    SFColor * _darkModeColor;
    double  _greenComponent;
    struct { 
        unsigned int redComponent : 1; 
        unsigned int greenComponent : 1; 
        unsigned int blueComponent : 1; 
        unsigned int alphaComponent : 1; 
        unsigned int colorTintStyle : 1; 
    }  _has;
    double  _redComponent;
}

@property (nonatomic) double alphaComponent;
@property (nonatomic) double blueComponent;
@property (nonatomic) int colorTintStyle;
@property (nonatomic, retain) SFColor *darkModeColor;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic) double greenComponent;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) double redComponent;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (double)alphaComponent;
- (double)blueComponent;
- (int)colorTintStyle;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)darkModeColor;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (double)greenComponent;
- (bool)hasAlphaComponent;
- (bool)hasBlueComponent;
- (bool)hasColorTintStyle;
- (bool)hasGreenComponent;
- (bool)hasRedComponent;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithProtobuf:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (double)redComponent;
- (void)setAlphaComponent:(double)arg1;
- (void)setBlueComponent:(double)arg1;
- (void)setColorTintStyle:(int)arg1;
- (void)setDarkModeColor:(id)arg1;
- (void)setGreenComponent:(double)arg1;
- (void)setRedComponent:(double)arg1;

// Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI

- (Class)searchUI_colorGeneratorClass;

@end
