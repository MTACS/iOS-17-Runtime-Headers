
@interface NUArticleScrollPosition : NSObject {
    SXScrollPosition * _position;
    long long  _source;
}

@property (nonatomic, readonly) SXScrollPosition *position;
@property (nonatomic, readonly) long long source;

- (void).cxx_destruct;
- (id)initWithPosition:(id)arg1 source:(long long)arg2;
- (id)position;
- (long long)source;

@end
