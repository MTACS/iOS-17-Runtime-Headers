
@protocol AKTextAttributesUserInterfaceItem <NSObject>

@required

- (NSDictionary *)convertTextAttributes:(NSDictionary *)arg1;
- (void)syncTextAttributesToUI:(NSSet *)arg1;

@end
