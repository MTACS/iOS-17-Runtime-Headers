
@interface CNContainerUpdate : NSObject <CNContainerUpdate> {
    CNContainerPropertyDescription * _property;
    id  _value;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)updateWithValue:(id)arg1 property:(id)arg2;

- (void).cxx_destruct;
- (void)applyToMutableContainer:(id)arg1;
- (id)description;
- (id)initWithProperty:(id)arg1 value:(id)arg2;
- (id)property;
- (id)value;

@end
