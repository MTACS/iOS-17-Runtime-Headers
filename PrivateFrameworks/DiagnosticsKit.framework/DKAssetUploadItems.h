
@interface DKAssetUploadItems : NSObject <NSCopying, NSSecureCoding> {
    NSArray * _items;
}

@property (nonatomic, readonly) NSArray *items;

+ (id)assetWithItems:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_decoderClasses;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithItems:(id)arg1;
- (id)items;

@end
