
@protocol AVLayoutViewItem <NSObject>

@required

- (AVLayoutItemAttributes *)layoutAttributes;
- (void)layoutAttributesDidChange;

@end
