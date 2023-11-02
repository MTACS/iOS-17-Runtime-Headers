
@interface _SUUIInspectablePropertySection : NSObject {
    NSString * _friendlyName;
    NSMutableArray * _properties;
}

@property (nonatomic, copy) NSString *friendlyName;
@property (nonatomic, readonly) NSMutableArray *properties;

- (void).cxx_destruct;
- (id)friendlyName;
- (id)init;
- (id)properties;
- (void)setFriendlyName:(id)arg1;

@end
