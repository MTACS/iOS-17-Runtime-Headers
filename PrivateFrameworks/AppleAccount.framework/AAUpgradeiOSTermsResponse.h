
@interface AAUpgradeiOSTermsResponse : AAResponse {
    NSData * _xmlUIData;
}

@property (nonatomic, readonly) NSData *xmlUIData;

- (void).cxx_destruct;
- (bool)bodyIsPlist;
- (id)initWithHTTPResponse:(id)arg1 data:(id)arg2;
- (id)responseXMLData;
- (id)xmlUIData;

@end
