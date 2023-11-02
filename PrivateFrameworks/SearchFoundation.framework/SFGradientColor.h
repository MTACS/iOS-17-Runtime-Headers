
@interface SFGradientColor : SFColor <NSCopying, NSSecureCoding, SFGradientColor> {
    NSArray * _colors;
    int  _gradientType;
    struct { 
        unsigned int gradientType : 1; 
    }  _has;
}

@property (nonatomic) double alphaComponent;
@property (nonatomic) double blueComponent;
@property (nonatomic) int colorTintStyle;
@property (nonatomic, copy) NSArray *colors;
@property (nonatomic, retain) SFColor *darkModeColor;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic) int gradientType;
@property (nonatomic) double greenComponent;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) double redComponent;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)colors;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (int)gradientType;
- (bool)hasGradientType;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithProtobuf:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (void)setColors:(id)arg1;
- (void)setGradientType:(int)arg1;

// Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI

- (Class)searchUI_colorGeneratorClass;

@end
