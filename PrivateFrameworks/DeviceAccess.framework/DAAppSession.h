
@interface DAAppSession : NSObject <CUXPCCodable> {
    NSString * _bundleIdentifier;
}

@property (nonatomic, copy) NSString *bundleIdentifier;

- (void).cxx_destruct;
- (id)bundleIdentifier;
- (void)encodeWithXPCObject:(id)arg1;
- (id)initWithXPCObject:(id)arg1 error:(id*)arg2;
- (void)setBundleIdentifier:(id)arg1;

@end
