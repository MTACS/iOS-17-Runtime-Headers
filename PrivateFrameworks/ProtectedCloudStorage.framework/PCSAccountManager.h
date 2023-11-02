
@interface PCSAccountManager : NSObject {
    NSString * _dsid;
}

@property (retain) NSString *dsid;

- (void).cxx_destruct;
- (unsigned long long)accountStatus;
- (id)dsid;
- (id)initWithDSID:(id)arg1;
- (void)setDsid:(id)arg1;

@end
