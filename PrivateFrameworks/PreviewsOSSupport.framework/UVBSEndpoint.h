
@interface UVBSEndpoint : NSObject <BSXPCSecureCoding> {
    BSServiceConnectionEndpoint * _underlying;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) BSServiceConnectionEndpoint *underlying;

+ (bool)supportsBSXPCSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (id)initWithBSXPCCoder:(id)arg1;
- (id)initWithUnderlying:(id)arg1;
- (id)underlying;

@end
