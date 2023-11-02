
@interface PXGDecorationReference : NSObject {
    PXGSpriteReference * _decoratedSpriteReference;
    long long  _decorationType;
}

@property (nonatomic, readonly) PXGSpriteReference *decoratedSpriteReference;
@property (nonatomic, readonly) long long decorationType;

- (void).cxx_destruct;
- (id)decoratedSpriteReference;
- (long long)decorationType;
- (id)init;
- (id)initWithDecoratedSpriteReference:(id)arg1 decorationType:(long long)arg2;

@end
