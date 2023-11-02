
@interface _TVImageSymbolDescription : NSObject <NSCopying> {
    UIImageSymbolConfiguration * _imageSymbolConfiguration;
    NSString * _symbolName;
}

@property (nonatomic, retain) UIImageSymbolConfiguration *imageSymbolConfiguration;
@property (nonatomic, readonly, copy) NSString *symbolName;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (id)imageSymbolConfiguration;
- (id)initWithSymbolName:(id)arg1 imageSymbolConfiguration:(id)arg2;
- (bool)isEqual:(id)arg1;
- (void)setImageSymbolConfiguration:(id)arg1;
- (id)symbolName;

@end
