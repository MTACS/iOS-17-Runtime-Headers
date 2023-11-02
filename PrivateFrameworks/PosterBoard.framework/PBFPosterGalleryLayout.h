
@interface PBFPosterGalleryLayout : NSObject <NSCopying, NSSecureCoding> {
    NSLocale * _locale;
    NSArray * _sections;
    long long  _source;
}

@property (nonatomic, readonly) NSLocale *locale;
@property (nonatomic, readonly, copy) NSArray *sections;
@property (nonatomic, readonly) long long source;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithProactiveRepresentation:(id)arg1;
- (id)initWithSections:(id)arg1 locale:(id)arg2;
- (id)initWithSections:(id)arg1 locale:(id)arg2 source:(long long)arg3;
- (bool)isEqual:(id)arg1;
- (id)locale;
- (id)proactiveRepresentation;
- (id)sections;
- (long long)source;

@end
