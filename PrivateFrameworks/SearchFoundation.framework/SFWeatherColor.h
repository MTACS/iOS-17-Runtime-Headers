
@interface SFWeatherColor : SFColor <NSCopying, NSSecureCoding, SFWeatherColor> {
    NSString * _condition;
    NSDate * _date;
    SFLatLng * _location;
}

@property (nonatomic) double alphaComponent;
@property (nonatomic) double blueComponent;
@property (nonatomic) int colorTintStyle;
@property (nonatomic, copy) NSString *condition;
@property (nonatomic, retain) SFColor *darkModeColor;
@property (nonatomic, copy) NSDate *date;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic) double greenComponent;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) SFLatLng *location;
@property (nonatomic) double redComponent;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)condition;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)date;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithProtobuf:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)location;
- (void)setCondition:(id)arg1;
- (void)setDate:(id)arg1;
- (void)setLocation:(id)arg1;

// Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI

- (Class)searchUI_colorGeneratorClass;

@end
