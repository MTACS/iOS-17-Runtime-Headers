
@protocol UIContentConfiguration <NSObject, NSCopying>

@required

- (UIView<UIContentView> *)makeContentView;
- (id)updatedConfigurationForState:(id <UIConfigurationState>)arg1;

@end
