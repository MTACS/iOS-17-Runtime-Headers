
@interface PXStoryHitTestResult : PXFeedHitTestResult {
    long long  _clipIdentifier;
}

@property (nonatomic, readonly) long long clipIdentifier;

- (long long)clipIdentifier;
- (id)clipIdentifier:(long long)arg1;
- (id)initWithSpriteIndex:(unsigned int)arg1 layout:(id)arg2 identifier:(id)arg3;

@end
