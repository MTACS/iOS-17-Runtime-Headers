
@protocol UISSlotAnyContent <NSObject>

@required

- (unsigned char)contentScale;
- (struct CGSize { double x1; double x2; })contentSize;
- (void)deleteFromLayerContext:(CAContext *)arg1;
- (id)image;
- (bool)isRemote;
- (bool)shouldReplaceExistingContent;

@end
