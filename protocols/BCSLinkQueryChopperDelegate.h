
@protocol BCSLinkQueryChopperDelegate <NSObject>

@required

- (void)_isBusinessRegisteredWithItemIdentifier:(void *)arg1 forClientBundleID:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 10: <BCSItemIdentifying> *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, BCSConfigItem *, NSError *, void*
- (void)_itemWithIdentifier:(void *)arg1 forClientBundleID:(void *)arg2 skipFilterCheck:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 10: <BCSItemIdentifying> *, NSString *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, BCSItem *, NSError *, void*

@end
