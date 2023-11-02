
@interface RFMonogramImage : NSObject <NSCopying, NSSecureCoding, RFMonogramImage> {
    struct { 
        unsigned int image_style : 1; 
    }  _has;
    int  _image_style;
    NSString * _letters;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (readonly) unsigned long long hash;
@property (nonatomic) int image_style;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSString *letters;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasImage_style;
- (unsigned long long)hash;
- (int)image_style;
- (id)initWithCoder:(id)arg1;
- (id)initWithProtobuf:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)letters;
- (void)setImage_style:(int)arg1;
- (void)setLetters:(id)arg1;

@end
