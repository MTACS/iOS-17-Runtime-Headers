
@interface MRArtwork : NSObject <NSCopying> {
    long long  _height;
    NSData * _imageData;
    long long  _width;
}

@property (nonatomic, readonly, copy) NSDictionary *dictionaryRepresentation;
@property (nonatomic) long long height;
@property (nonatomic, copy) NSData *imageData;
@property (nonatomic) long long width;

+ (bool)processRequestsExternalArtworkValidation;

- (void).cxx_destruct;
- (id)artworkByResizingWithWidth:(long long)arg1 height:(long long)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)description;
- (id)dictionaryRepresentation;
- (long long)height;
- (id)imageData;
- (id)initWithImageData:(id)arg1 height:(long long)arg2 width:(long long)arg3;
- (id)initWithProtobuf:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setHeight:(long long)arg1;
- (void)setImageData:(id)arg1;
- (void)setWidth:(long long)arg1;
- (long long)width;

@end
