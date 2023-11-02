
@interface BMEventAppAssociatingImplementor : BMEventBase <BMEventAppAssociating> {
    NSString * bundleID;
}

@property (nonatomic, copy) NSString *bundleID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)bundleID;
- (bool)isCompleteWithContext:(id)arg1 error:(id*)arg2;
- (bool)isValidWithContext:(id)arg1 error:(id*)arg2;
- (void)setBundleID:(id)arg1;

@end
