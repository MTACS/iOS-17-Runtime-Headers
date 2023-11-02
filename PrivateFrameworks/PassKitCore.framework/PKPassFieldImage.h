
@interface PKPassFieldImage : NSObject <NSSecureCoding> {
    bool  _allowInternalSymbols;
    PKImage * _image;
    NSData * _imageHash;
    NSString * _imageName;
    NSString * _symbolName;
    long long  _tintColor;
}

@property (nonatomic, readonly) bool allowInternalSymbols;
@property (nonatomic, readonly) PKImage *image;
@property (nonatomic, readonly, copy) NSData *imageHash;
@property (nonatomic, readonly, copy) NSString *imageName;
@property (nonatomic, readonly, copy) NSString *symbolName;
@property (nonatomic, readonly) long long tintColor;

+ (id)createForDictionary:(id)arg1 bundle:(id)arg2 privateBundle:(id)arg3 passType:(unsigned long long)arg4;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_init;
- (bool)allowInternalSymbols;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)image;
- (id)imageHash;
- (id)imageName;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)symbolName;
- (long long)tintColor;

@end
