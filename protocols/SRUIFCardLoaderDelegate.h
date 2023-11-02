
@protocol SRUIFCardLoaderDelegate <NSObject>

@required

- (bool)cardLoader:(void *)arg1 loadCard:(void *)arg2 withCompletionHandler:(void *)arg3; // needs 3 arg types, found 9: SRUIFCardLoader *, SFCard *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SFCard *, NSError *, void*
- (bool)cardLoader:(SRUIFCardLoader *)arg1 shouldLoadCard:(SFCard *)arg2;

@end
