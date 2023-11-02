
@interface PBFPosterGallerySection : NSObject <NSCopying, NSSecureCoding> {
    NSArray * _items;
    NSString * _localizedDescriptiveText;
    NSString * _localizedSubtitle;
    NSString * _localizedTitle;
    NSString * _symbolColorName;
    NSString * _symbolImageName;
    long long  _type;
    NSString * _unityDescription;
}

@property (nonatomic, readonly, copy) NSArray *items;
@property (nonatomic, readonly, copy) NSString *localizedDescriptiveText;
@property (nonatomic, readonly, copy) NSString *localizedSubtitle;
@property (nonatomic, readonly, copy) NSString *localizedTitle;
@property (nonatomic, readonly, copy) NSString *symbolColorName;
@property (nonatomic, readonly, copy) NSString *symbolImageName;
@property (nonatomic, readonly) long long type;
@property (nonatomic, readonly, copy) NSString *unityDescription;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithProactiveRepresentation:(id)arg1;
- (id)initWithType:(long long)arg1 localizedTitle:(id)arg2 localizedSubtitle:(id)arg3 localizedDescriptiveText:(id)arg4 symbolImageName:(id)arg5 symbolColorName:(id)arg6 unityDescription:(id)arg7 items:(id)arg8;
- (bool)isEqual:(id)arg1;
- (id)items;
- (id)localizedDescriptiveText;
- (id)localizedSubtitle;
- (id)localizedTitle;
- (id)proactiveRepresentation;
- (id)symbolColorName;
- (id)symbolImageName;
- (long long)type;
- (id)unityDescription;

@end
