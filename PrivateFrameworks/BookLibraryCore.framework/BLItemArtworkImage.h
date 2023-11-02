
@interface BLItemArtworkImage : NSObject <NSCopying> {
    NSMutableDictionary * _dictionary;
    NSString * _imageKind;
}

@property (nonatomic, retain) NSURL *URL;
@property (nonatomic, readonly) NSString *URLString;
@property (nonatomic, copy) NSString *imageKind;
@property (nonatomic, readonly) double imageScale;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } imageSize;

- (void).cxx_destruct;
- (id)URL;
- (id)URLString;
- (void)_setValue:(id)arg1 forKey:(id)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (long long)height;
- (id)imageKind;
- (double)imageScale;
- (struct CGSize { double x1; double x2; })imageSize;
- (id)initWithArtworkDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setImageKind:(id)arg1;
- (void)setImageKindWithTypeName:(id)arg1 variantName:(id)arg2;
- (void)setURL:(id)arg1;
- (void)setValue:(id)arg1 forProperty:(id)arg2;
- (id)valueForProperty:(id)arg1;
- (long long)width;

@end
