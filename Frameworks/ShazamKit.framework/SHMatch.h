
@interface SHMatch : NSObject <NSSecureCoding> {
    NSArray * _mediaItems;
    SHSignature * _querySignature;
}

@property (nonatomic, readonly) NSArray *mediaItems;
@property (nonatomic, readonly) SHSignature *querySignature;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)containsMediaItemWithFuzzyTolerance:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithMediaItems:(id)arg1 forSignature:(id)arg2;
- (id)mediaItems;
- (id)querySignature;

@end
