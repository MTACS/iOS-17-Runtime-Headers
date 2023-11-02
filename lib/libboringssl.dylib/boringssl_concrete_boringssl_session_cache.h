
@interface boringssl_concrete_boringssl_session_cache : NSObject <OS_boringssl_session_cache> {
    NSObject<OS_nw_association> * association;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;

@end
