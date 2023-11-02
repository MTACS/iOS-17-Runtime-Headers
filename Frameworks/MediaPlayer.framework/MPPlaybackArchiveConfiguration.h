
@interface MPPlaybackArchiveConfiguration : NSObject <NSSecureCoding> {
    struct CGSize { 
        double width; 
        double height; 
    }  _preferredArtworkSize;
}

@property (nonatomic) struct CGSize { double x1; double x2; } preferredArtworkSize;

+ (bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPreferredArtworkSize:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })preferredArtworkSize;
- (void)setPreferredArtworkSize:(struct CGSize { double x1; double x2; })arg1;

@end
