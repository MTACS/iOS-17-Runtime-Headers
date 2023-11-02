
@interface CPMessageListItemTrailingConfiguration : NSObject <NSSecureCoding> {
    CPImageSet * _trailingImageSet;
    long long  _trailingItem;
}

@property (nonatomic, readonly) UIImage *trailingImage;
@property (nonatomic, retain) CPImageSet *trailingImageSet;
@property (nonatomic, readonly) long long trailingItem;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTrailingItem:(long long)arg1 trailingImage:(id)arg2;
- (void)setTrailingImageSet:(id)arg1;
- (id)trailingImage;
- (id)trailingImageSet;
- (long long)trailingItem;

@end
