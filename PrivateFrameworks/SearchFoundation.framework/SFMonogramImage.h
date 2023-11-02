
@interface SFMonogramImage : SFImage <NSCopying, NSSecureCoding, SFMonogramImage> {
    struct { 
        unsigned int monogramStyle : 1; 
    }  _has;
    NSString * _monogramLetters;
    int  _monogramStyle;
}

@property (nonatomic, copy) NSString *accessibilityLabel;
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
@property (nonatomic, copy) NSString *monogramLetters;
@property (nonatomic) int monogramStyle;
@property (nonatomic) double scale;
@property (nonatomic) bool shouldCropToCircle;
@property (nonatomic) struct CGSize { double x1; double x2; } size;
@property (nonatomic) int source;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasMonogramStyle;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithProtobuf:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)monogramLetters;
- (int)monogramStyle;
- (void)setMonogramLetters:(id)arg1;
- (void)setMonogramStyle:(int)arg1;

@end
