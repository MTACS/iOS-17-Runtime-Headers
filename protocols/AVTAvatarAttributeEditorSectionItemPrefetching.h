
@protocol AVTAvatarAttributeEditorSectionItemPrefetching <NSObject>

@required

- (NSString *)prefetchingIdentifier;
- (id /* block */)presetResourcesProvider:(void *)arg1; // needs 1 arg types, found 4: id /* block */, void*, id, SEL
- (id /* block */)stickerResourceProvider:(void *)arg1; // needs 1 arg types, found 20: void*, void, id /* block */, id /* block */, void*, void, id /* block */, void*, void*, id /* block */, id /* block */, void*, void, id /* block */, AVTStickerResource *, void*, bool, void*, id, SEL
- (id /* block */)thumbnailProvider:(void *)arg1; // needs 1 arg types, found 20: void*, void, id /* block */, id /* block */, void*, void, id /* block */, void*, void*, id /* block */, id /* block */, void*, void, id /* block */, UIImage *, void*, bool, void*, id, SEL

@end
