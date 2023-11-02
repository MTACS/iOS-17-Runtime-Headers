
@interface LNDisplayRepresentation : NSObject <NSCopying, NSSecureCoding> {
    LNImage * _image;
    LNStaticDeferredLocalizedString * _subtitle;
    NSArray * _synonyms;
    LNStaticDeferredLocalizedString * _title;
}

@property (nonatomic, readonly) LNImage *image;
@property (nonatomic, readonly) LNStaticDeferredLocalizedString *subtitle;
@property (nonatomic, readonly, copy) NSArray *synonyms;
@property (nonatomic, readonly) LNStaticDeferredLocalizedString *title;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)image;
- (id)initWithCoder:(id)arg1;
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2 image:(id)arg3;
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2 image:(id)arg3 synonyms:(id)arg4;
- (bool)isEqual:(id)arg1;
- (id)subtitle;
- (id)synonyms;
- (id)title;

@end
