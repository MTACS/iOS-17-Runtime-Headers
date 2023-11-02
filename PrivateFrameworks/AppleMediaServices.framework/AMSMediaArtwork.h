
@interface AMSMediaArtwork : NSObject {
    NSDictionary * _artworkDictionary;
}

@property (nonatomic, readonly) NSDictionary *artworkDictionary;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } artworkSize;

- (void).cxx_destruct;
- (id)URLString;
- (id)URLWithSize:(struct CGSize { double x1; double x2; })arg1;
- (id)URLWithSize:(struct CGSize { double x1; double x2; })arg1 cropStyle:(id)arg2 format:(id)arg3;
- (id)URLWithSize:(struct CGSize { double x1; double x2; })arg1 cropStyle:(id)arg2 format:(id)arg3 quality:(unsigned long long)arg4;
- (unsigned long long)_qualityForFormat:(id)arg1;
- (id)artworkDictionary;
- (struct CGSize { double x1; double x2; })artworkSize;
- (struct CGColor { }*)colorWithKind:(id)arg1;
- (double)height;
- (id)initWithDictionary:(id)arg1;
- (double)width;

@end
