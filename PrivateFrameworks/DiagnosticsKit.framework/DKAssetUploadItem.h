
@interface DKAssetUploadItem : NSObject <NSCopying, NSSecureCoding> {
    NSData * _data;
    NSDictionary * _extra;
}

@property (nonatomic, readonly) NSData *data;
@property (nonatomic, readonly) NSDictionary *extra;

+ (id)assetWithData:(id)arg1 andExtra:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_decoderClasses;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)data;
- (void)encodeWithCoder:(id)arg1;
- (id)extra;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1 andExtra:(id)arg2;

@end
