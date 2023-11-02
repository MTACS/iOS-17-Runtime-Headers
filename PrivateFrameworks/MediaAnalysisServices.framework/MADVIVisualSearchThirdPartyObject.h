
@interface MADVIVisualSearchThirdPartyObject : NSObject <NSSecureCoding> {
    NSString * _imageURL;
    NSData * _metadata;
    NSString * _objectIdentifier;
    NSString * _thumbnailURL;
}

@property (nonatomic, readonly) NSString *imageURL;
@property (nonatomic, readonly) NSData *metadata;
@property (nonatomic, readonly) NSString *objectIdentifier;
@property (nonatomic, readonly) NSString *thumbnailURL;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)imageURL;
- (id)initWithCoder:(id)arg1;
- (id)initWithObjectIdentifier:(id)arg1 imageURL:(id)arg2 thumbnailURL:(id)arg3 metadata:(id)arg4;
- (id)metadata;
- (id)objectIdentifier;
- (id)thumbnailURL;

@end
