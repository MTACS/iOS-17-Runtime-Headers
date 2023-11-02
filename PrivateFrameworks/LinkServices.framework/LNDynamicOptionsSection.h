
@interface LNDynamicOptionsSection : NSObject <NSCopying, NSSecureCoding> {
    LNImage * _image;
    NSArray * _options;
    LNDeferredLocalizedString * _subtitle;
    LNDeferredLocalizedString * _title;
}

@property (nonatomic, readonly) LNImage *image;
@property (nonatomic, readonly) NSArray *options;
@property (nonatomic, readonly) LNDeferredLocalizedString *subtitle;
@property (nonatomic, readonly) LNDeferredLocalizedString *title;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)image;
- (id)initWithCoder:(id)arg1;
- (id)initWithOptions:(id)arg1 title:(id)arg2;
- (id)initWithOptions:(id)arg1 title:(id)arg2 subtitle:(id)arg3 image:(id)arg4;
- (id)options;
- (id)subtitle;
- (id)title;

@end
