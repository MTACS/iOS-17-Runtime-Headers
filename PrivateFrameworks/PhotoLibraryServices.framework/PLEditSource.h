
@interface PLEditSource : NSObject {
    long long  _mediaType;
    NUResolvedSource * _resolvedSource;
}

@property (nonatomic, readonly) bool isRAWSource;
@property (nonatomic, readonly) long long mediaType;
@property (nonatomic, readonly) NUResolvedSource *resolvedSource;
@property (nonatomic, readonly, retain) NUSource *source;

- (void).cxx_destruct;
- (id)description;
- (id)initWithResolvedSource:(id)arg1 mediaType:(long long)arg2;
- (bool)isRAWSource;
- (long long)mediaType;
- (id)resolvedSource;
- (void)setIdentifier:(id)arg1;
- (void)setResolvedSource:(id)arg1 mediaType:(long long)arg2;
- (id)source;

@end
