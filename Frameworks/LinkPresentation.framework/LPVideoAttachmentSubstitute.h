
@interface LPVideoAttachmentSubstitute : LPVideo <NSSecureCoding> {
    long long  _index;
}

@property (nonatomic) long long index;

+ (bool)supportsSecureCoding;

- (bool)_isSubstitute;
- (void)encodeWithCoder:(id)arg1;
- (long long)index;
- (id)initWithCoder:(id)arg1;
- (id)initWithVideo:(id)arg1;
- (void)setIndex:(long long)arg1;

@end
