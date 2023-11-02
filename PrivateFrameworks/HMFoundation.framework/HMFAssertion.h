
@interface HMFAssertion : HMFObject <HMFLogging> {
    NSString * _name;
    bool  _valid;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSString *name;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *uniqueDescription;
@property (getter=isValid, readonly) bool valid;

+ (id)bundleIdentifier;
+ (id)logCategory;

- (void).cxx_destruct;
- (bool)acquire:(id*)arg1;
- (id)attributeDescriptions;
- (void)dealloc;
- (id)init;
- (id)initWithName:(id)arg1;
- (void)invalidate;
- (bool)isValid;
- (id)logIdentifier;
- (void)mark;
- (id)name;
- (id)uniqueDescription;

@end
