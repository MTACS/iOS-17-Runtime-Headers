
@interface RFVisualElement : NSObject <NSCopying, NSSecureCoding, RFVisualElement> {
    struct { 
        unsigned int image_element : 1; 
    }  _has;
    RFImageElement * _image_element;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) RFImageElement *image_element;
@property (nonatomic, readonly) NSData *jsonData;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasImage_element;
- (unsigned long long)hash;
- (id)image_element;
- (id)initWithCoder:(id)arg1;
- (id)initWithProtobuf:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (void)setImage_element:(id)arg1;

@end
