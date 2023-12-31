
@protocol HULayoutAnchorProviding <NSObject>

@required

- (NSLayoutYAxisAnchor *)bottomAnchor;
- (NSLayoutXAxisAnchor *)centerXAnchor;
- (NSLayoutYAxisAnchor *)centerYAnchor;
- (NSLayoutDimension *)heightAnchor;
- (NSLayoutXAxisAnchor *)leadingAnchor;
- (NSLayoutXAxisAnchor *)leftAnchor;
- (NSLayoutXAxisAnchor *)rightAnchor;
- (NSLayoutYAxisAnchor *)topAnchor;
- (NSLayoutXAxisAnchor *)trailingAnchor;
- (NSLayoutDimension *)widthAnchor;

@end
