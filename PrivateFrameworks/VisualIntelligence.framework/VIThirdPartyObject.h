
@interface VIThirdPartyObject : NSObject <NSCopying> {
    NSString * _imageURL;
    NSData * _metadata;
    NSString * _objectIdentifier;
    NSString * _thumbnailURL;
}

@property (nonatomic, readonly) NSString *imageURL;
@property (nonatomic, readonly) NSData *metadata;
@property (nonatomic, readonly) NSString *objectIdentifier;
@property (nonatomic, readonly) NSString *thumbnailURL;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)imageURL;
- (id)initWithObjectIdentifier:(id)arg1 imageURL:(id)arg2 thumbnailURL:(id)arg3 metadata:(id)arg4;
- (bool)isEqual:(id)arg1;
- (id)metadata;
- (id)objectIdentifier;
- (id)thumbnailURL;

@end
