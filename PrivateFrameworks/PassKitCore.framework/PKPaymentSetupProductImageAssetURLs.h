
@interface PKPaymentSetupProductImageAssetURLs : NSObject <NSCopying> {
    NSURL * _digitalCardImageUrl;
    NSURL * _logoImageUrl;
    NSURL * _thumbnailImageUrl;
}

@property (nonatomic, readonly) NSURL *digitalCardImageUrl;
@property (nonatomic, readonly) NSURL *logoImageUrl;
@property (nonatomic, readonly) NSURL *thumbnailImageUrl;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)digitalCardImageUrl;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithImageAssetsDictionary:(id)arg1;
- (id)logoImageUrl;
- (id)thumbnailImageUrl;

@end
