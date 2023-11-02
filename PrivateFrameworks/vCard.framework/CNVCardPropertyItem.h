
@interface CNVCardPropertyItem : NSObject {
    NSString * _identifier;
    NSString * _label;
    id  _value;
}

@property (readonly) NSString *identifier;
@property (readonly) NSString *label;
@property (readonly) id value;

+ (id)itemWithValue:(id)arg1 label:(id)arg2 identifier:(id)arg3;

- (void).cxx_destruct;
- (id)description;
- (id)identifier;
- (id)initWithValue:(id)arg1 label:(id)arg2 identifier:(id)arg3;
- (id)label;
- (id)value;

@end
