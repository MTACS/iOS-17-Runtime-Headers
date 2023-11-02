
@interface PKFaceIDBannerHandleState : PKBannerHandleState <NSSecureCoding> {
    long long  _glyphState;
}

@property (nonatomic, readonly) long long glyphState;

+ (id)createForGlyphState:(long long)arg1;
+ (bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (long long)glyphState;
- (id)initWithCoder:(id)arg1;

@end
