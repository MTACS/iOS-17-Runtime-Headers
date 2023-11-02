
@interface BCImage : NSObject {
    NSString * _identifier;
    NSData * _imageData;
    NSString * _imageDescription;
}

@property (nonatomic, readonly) NSDictionary *dictionaryValue;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) UIImage *image;
@property (nonatomic, readonly) NSData *imageData;
@property (nonatomic, readonly) NSString *imageDescription;

- (void).cxx_destruct;
- (id)dictionaryValue;
- (id)identifier;
- (id)image;
- (id)imageData;
- (id)imageDescription;
- (id)initWithImageData:(id)arg1 identifier:(id)arg2 description:(id)arg3;

@end
