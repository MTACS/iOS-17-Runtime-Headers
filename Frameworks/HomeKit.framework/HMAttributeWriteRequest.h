
@interface HMAttributeWriteRequest : HMAttributeRequest <HMWriteOperation> {
    <NSCopying><NSObject> * _value;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <NSCopying><NSObject> *value;

+ (id)writeRequestWithAccessoryProfile:(id)arg1 attribute:(id)arg2 value:(id)arg3;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithAccessoryProfile:(id)arg1 attribute:(id)arg2 value:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)value;

@end
