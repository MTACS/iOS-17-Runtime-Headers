
@protocol SFCardResourceLoader <NSObject>

@required

- (bool)canLoadCard:(SFCard *)arg1;
- (void)loadCard:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: SFCard *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SFCard *, NSError *, void*

@end
