
@interface VUIPlistMediaEntityImageLoadParams : NSObject <VUIImageLoadParams> {
    NSString * _baseImageIdentifier;
    NSString * _imageIdentifier;
    unsigned long long  _imageType;
    NSURL * _imageURL;
}

@property (nonatomic, copy) NSString *baseImageIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *imageIdentifier;
@property (nonatomic) unsigned long long imageType;
@property (nonatomic, copy) NSURL *imageURL;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)baseImageIdentifier;
- (id)description;
- (unsigned long long)hash;
- (id)imageIdentifier;
- (unsigned long long)imageType;
- (id)imageURL;
- (id)init;
- (id)initWithImageURL:(id)arg1 baseImageIdentifier:(id)arg2 imageType:(unsigned long long)arg3;
- (bool)isEqual:(id)arg1;
- (void)setBaseImageIdentifier:(id)arg1;
- (void)setImageType:(unsigned long long)arg1;
- (void)setImageURL:(id)arg1;

@end
