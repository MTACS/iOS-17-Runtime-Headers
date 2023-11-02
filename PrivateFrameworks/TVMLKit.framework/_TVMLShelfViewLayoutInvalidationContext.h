
@interface _TVMLShelfViewLayoutInvalidationContext : TVShelfViewLayoutInvalidationContext {
    bool  _invalidateShowcase;
}

@property (nonatomic) bool invalidateShowcase;

- (bool)invalidateShowcase;
- (void)setInvalidateShowcase:(bool)arg1;

@end
