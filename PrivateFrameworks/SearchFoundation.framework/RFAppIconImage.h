
@interface RFAppIconImage : NSObject <NSCopying, NSSecureCoding, RFAppIconImage> {
    NSString * _application_bundle_identifier;
    struct { 
        unsigned int image_style : 1; 
    }  _has;
    int  _image_style;
}

@property (nonatomic, copy) NSString *application_bundle_identifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (readonly) unsigned long long hash;
@property (nonatomic) int image_style;
@property (nonatomic, readonly) NSData *jsonData;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)application_bundle_identifier;
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
- (void)setApplication_bundle_identifier:(id)arg1;
- (void)setImage_style:(int)arg1;

@end
