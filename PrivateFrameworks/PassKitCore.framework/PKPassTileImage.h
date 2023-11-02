
@interface PKPassTileImage : NSObject <NSSecureCoding> {
    PKImage * _image;
    NSData * _imageHash;
    NSString * _imageName;
    bool  _resolved;
    NSString * _symbolName;
    long long  _tintColor;
}

@property (nonatomic, readonly) PKImage *image;
@property (nonatomic, readonly, copy) NSData *imageHash;
@property (nonatomic, copy) NSString *imageName;
@property (getter=isResolved, nonatomic, readonly) bool resolved;
@property (nonatomic, copy) NSString *symbolName;
@property (nonatomic) long long tintColor;

+ (id)_createForDictionary:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_init;
- (id)createResolvedImageWithBundle:(id)arg1 privateBundle:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)image;
- (id)imageHash;
- (id)imageName;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToUnresolvedImage:(id)arg1;
- (bool)isResolved;
- (void)setImageName:(id)arg1;
- (void)setSymbolName:(id)arg1;
- (void)setTintColor:(long long)arg1;
- (id)symbolName;
- (long long)tintColor;

@end
