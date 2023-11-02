
@interface SGMicrodataItemProp : NSObject {
    SGMicrodataItem * _itemValue;
    NSString * _propertyName;
    NSString * _stringValue;
}

@property (nonatomic, readonly) SGMicrodataItem *itemValue;
@property (nonatomic, readonly) NSString *propertyName;
@property (nonatomic, readonly) NSString *stringValue;

- (void).cxx_destruct;
- (id)initWithName:(id)arg1 value:(id)arg2;
- (id)itemValue;
- (id)propertyName;
- (id)stringValue;

@end
