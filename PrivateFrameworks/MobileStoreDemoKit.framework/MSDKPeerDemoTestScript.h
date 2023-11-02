
@interface MSDKPeerDemoTestScript : NSObject <NSSecureCoding> {
    NSArray * _methods;
    NSString * _name;
}

@property (nonatomic, retain) NSArray *methods;
@property (nonatomic, retain) NSString *name;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 andMethods:(id)arg2;
- (id)methods;
- (id)name;
- (void)setMethods:(id)arg1;
- (void)setName:(id)arg1;

@end
