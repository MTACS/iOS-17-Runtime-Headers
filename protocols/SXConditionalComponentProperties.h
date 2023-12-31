
@protocol SXConditionalComponentProperties <NSObject>

@required

- (<SXComponentAnchor> *)anchor;
- (SXComponentAnimation *)animation;
- (SXJSONArray *)behaviors;
- (bool)hidden;
- (NSString *)layout;
- (NSString *)style;

@end
