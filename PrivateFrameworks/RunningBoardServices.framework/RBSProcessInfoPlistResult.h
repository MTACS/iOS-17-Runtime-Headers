
@interface RBSProcessInfoPlistResult : NSObject <RBSXPCSecureCoding> {
    id  _value;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, copy) id value;

+ (bool)supportsRBSXPCSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithRBSXPCCoder:(id)arg1;
- (id)initWithRBSXPCCoder:(id)arg1;
- (void)setValue:(id)arg1;
- (id)value;

@end
