
@interface HMICIFilterAttributeValue : HMFObject {
    id  _value;
}

@property (readonly) id value;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1 forType:(id)arg2;
- (id)value;

@end
