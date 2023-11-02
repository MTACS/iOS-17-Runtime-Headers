
@protocol SXInsertableComponent <NSObject>

@required

- (<SXComponentAnchor> *)anchor;
- (NSString *)identifier;
- (NSString *)layout;
- (void)setAnchor:(id <SXComponentAnchor>)arg1;
- (void)setIdentifier:(NSString *)arg1;
- (void)setLayout:(NSString *)arg1;

@end
