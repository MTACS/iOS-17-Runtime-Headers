
@protocol DBIconProviding <NSObject>

@required

- (bool)iconCanDisplayBadge:(DBLeafIcon *)arg1;
- (DBLeafIcon *)iconForIdentifier:(NSString *)arg1;
- (bool)isIconVisible:(DBLeafIcon *)arg1;
- (bool)isIconVisibleForIdentifier:(NSString *)arg1;

@end
