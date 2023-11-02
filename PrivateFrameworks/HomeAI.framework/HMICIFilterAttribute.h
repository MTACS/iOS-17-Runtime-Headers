
@interface HMICIFilterAttribute : HMFObject {
    NSString * _name;
    NSString * _type;
    HMICIFilterAttributeValue * _value;
}

@property (readonly) NSString *name;
@property (readonly) NSString *type;
@property (readonly) HMICIFilterAttributeValue *value;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;
- (id)name;
- (id)type;
- (id)value;

@end
