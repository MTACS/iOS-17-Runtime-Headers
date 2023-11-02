
@interface LSRecordBuilder : NSObject {
    _LSDatabase * _db;
}

+ (id)recordBuilderForType:(unsigned long long)arg1;

- (void).cxx_destruct;
- (bool)parseInfoPlist:(id)arg1;
- (bool)parseInstallationInfo:(id)arg1;
- (void)parseiTunesMetadata:(id)arg1;
- (unsigned int)registerBundleRecord:(id)arg1 error:(id*)arg2;
- (void)setDatabase:(id)arg1;

@end
