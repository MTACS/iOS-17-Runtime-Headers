
@protocol SYAddLinkContextServiceProtocol <NSObject>

@required

- (oneway void)userDidRemoveContentItemDatas:(NSArray *)arg1;
- (oneway void)userEditDidAddContentItemDatas:(NSArray *)arg1;
- (oneway void)userWillAddLinkWithActivityData:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSData *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSData *, void*

@end
