
@interface PKPrinterBonjourEndpoint : NSObject <NSCopying, NSSecureCoding> {
    NWEndpoint * _nwEndpoint;
    int  _provenance;
    NSArray * _resolvedCallouts;
    NSDictionary * _resolvedTXT;
    NSURL * _resolvedURL;
}

@property (readonly) NSString *displayNameForPrintKitUI;
@property (readonly) bool isIPPS;
@property (retain) NWEndpoint *nwEndpoint;
@property (readonly) NSString *persistentNameRepresentationForPrintKitUI;
@property (readonly) int provenance;
@property (retain) NSDictionary *resolvedTXT;
@property (retain) NSURL *resolvedURL;

+ (id)endpointWithBonjourString:(id)arg1;
+ (id)endpointWithData:(id)arg1;
+ (id)endpointWithURL:(id)arg1;
+ (id)serviceFromEndpoint:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_resolveEndpoint:(id /* block */)arg1;
- (void)_resolve_finish_resolvedURL:(id)arg1 resolvedTXT:(id)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dataRepresentation;
- (id)debugDescription;
- (id)description;
- (id)displayNameForPrintKitUI;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithBonjourString:(id)arg1 provenance:(int)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithEndpoint:(id)arg1 provenance:(int)arg2;
- (id)initWithURL:(id)arg1 txtRecord:(id)arg2 provenance:(int)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isIPPS;
- (id)nwEndpoint;
- (id)persistentNameRepresentationForPrintKitUI;
- (int)provenance;
- (id)resolvedTXT;
- (id)resolvedURL;
- (void)setNwEndpoint:(id)arg1;
- (void)setResolvedTXT:(id)arg1;
- (void)setResolvedURL:(id)arg1;
- (void)withResolvedTXT:(id /* block */)arg1;
- (void)withResolvedURL:(id /* block */)arg1;

@end
