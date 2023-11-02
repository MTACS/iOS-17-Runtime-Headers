
@interface SFSymbolImage : SFImage <NSCopying, NSSecureCoding, SFSymbolImage> {
    int  _backgroundColor;
    struct { 
        unsigned int punchThroughBackground : 1; 
        unsigned int backgroundColor : 1; 
        unsigned int primaryColor : 1; 
        unsigned int secondaryColor : 1; 
    }  _has;
    int  _primaryColor;
    bool  _punchThroughBackground;
    int  _secondaryColor;
    NSString * _symbolName;
}

@property (nonatomic, copy) NSString *accessibilityLabel;
@property (nonatomic) int backgroundColor;
@property (nonatomic, retain) SFImage *badgingImage;
@property (nonatomic, copy) NSString *contentType;
@property (nonatomic) double cornerRadius;
@property (nonatomic) int cornerRoundingStyle;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *identifier;
@property (copy) NSData *imageData;
@property (nonatomic) bool isTemplate;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSString *keyColor;
@property (nonatomic) int primaryColor;
@property (nonatomic) bool punchThroughBackground;
@property (nonatomic) double scale;
@property (nonatomic) int secondaryColor;
@property (nonatomic) bool shouldCropToCircle;
@property (nonatomic) struct CGSize { double x1; double x2; } size;
@property (nonatomic) int source;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *symbolName;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (int)backgroundColor;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasBackgroundColor;
- (bool)hasPrimaryColor;
- (bool)hasPunchThroughBackground;
- (bool)hasSecondaryColor;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithProtobuf:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (int)primaryColor;
- (bool)punchThroughBackground;
- (int)secondaryColor;
- (void)setBackgroundColor:(int)arg1;
- (void)setPrimaryColor:(int)arg1;
- (void)setPunchThroughBackground:(bool)arg1;
- (void)setSecondaryColor:(int)arg1;
- (void)setSymbolName:(id)arg1;
- (id)symbolName;

@end
