
@interface HMFAttributeDescription : NSObject <HMFObject> {
    NSFormatter * _formatter;
    NSString * _name;
    unsigned long long  _options;
    <NSObject> * _value;
}

@property (nonatomic, readonly, copy) NSArray *attributeDescriptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSFormatter *formatter;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly) unsigned long long options;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy) NSString *shortDescription;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <NSObject> *value;

+ (id)shortDescription;

- (void).cxx_destruct;
- (id)debugDescription;
- (id)description;
- (id)formatter;
- (unsigned long long)hash;
- (id)init;
- (id)initWithName:(id)arg1 value:(id)arg2;
- (id)initWithName:(id)arg1 value:(id)arg2 options:(unsigned long long)arg3 formatter:(id)arg4;
- (bool)isEqual:(id)arg1;
- (id)name;
- (unsigned long long)options;
- (id)privateDescription;
- (id)shortDescription;
- (id)value;

@end
