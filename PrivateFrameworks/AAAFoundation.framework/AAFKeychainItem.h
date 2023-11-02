
@interface AAFKeychainItem : NSObject {
    AAFKeychainItemDescriptor * _descriptor;
    NSData * _value;
}

@property (nonatomic, retain) AAFKeychainItemDescriptor *descriptor;
@property (nonatomic, copy) NSData *value;

- (void).cxx_destruct;
- (id)descriptor;
- (id)initWithAttributes:(id)arg1;
- (id)initWithDescriptor:(id)arg1 value:(id)arg2;
- (id)itemAttributes;
- (void)setDescriptor:(id)arg1;
- (void)setValue:(id)arg1;
- (id)value;

@end
