
@interface PUJoiningMediaProviderPredicateRecord : NSObject {
    PUMediaProvider * _mediaProvider;
    id /* block */  _predicate;
}

@property (nonatomic, readonly) PUMediaProvider *mediaProvider;
@property (nonatomic, readonly, copy) id /* block */ predicate;

- (void).cxx_destruct;
- (id)initWithMediaProvider:(id)arg1 predicate:(id /* block */)arg2;
- (id)mediaProvider;
- (id /* block */)predicate;

@end
