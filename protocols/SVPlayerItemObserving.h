
@protocol SVPlayerItemObserving <NSObject>

@required

- (id /* block */)changeBlock:(void *)arg1; // needs 1 arg types, found 5: id /* block */, <SVPlayerItemObserving> *, void*, id, SEL
- (AVPlayerItem *)item;
- (void)onChange:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <SVPlayerItemObserving> *, void*

@end
