
@interface _HMDNEHelperClientCacheEntry : NSObject {
    NSArray * _identifiers;
    NSString * _signingId;
}

@property (nonatomic, readonly) NSArray *identifiers;
@property (nonatomic, readonly) NSString *signingId;

- (void).cxx_destruct;
- (id)identifiers;
- (id)initWithSigningId:(id)arg1 identifiers:(id)arg2;
- (id)signingId;

@end
