
@interface TCMPSGraphNodeHandle : NSObject <MPSHandle> {
    NSString * _label;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)handleWithLabel:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithLabel:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)label;

@end
