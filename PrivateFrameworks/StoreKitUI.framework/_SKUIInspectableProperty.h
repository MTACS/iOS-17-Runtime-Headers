
@interface _SKUIInspectableProperty : NSObject {
    NSString * _friendlyName;
    id  _value;
}

@property (nonatomic, copy) NSString *friendlyName;
@property (nonatomic, retain) id value;
@property (nonatomic, readonly, copy) NSString *valueString;

- (void).cxx_destruct;
- (id)friendlyName;
- (void)setFriendlyName:(id)arg1;
- (void)setValue:(id)arg1;
- (id)value;
- (id)valueString;

@end
