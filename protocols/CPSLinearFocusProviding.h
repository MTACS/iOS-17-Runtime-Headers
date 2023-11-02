
@protocol CPSLinearFocusProviding <NSObject>

@required

- (NSArray *)_linearFocusItems;

@optional

- (bool)useRightHandDriveFocusGuide;

@end
