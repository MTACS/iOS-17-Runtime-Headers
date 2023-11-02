
@interface STBundleRecord_Base : NSObject <STBundleRecord> {
    NSURL * _recordBundleURL;
    NSString * _recordIdentifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSURL *recordBundleURL;
@property (nonatomic, readonly, copy) NSString *recordIdentifier;
@property (readonly) Class superclass;

+ (id)bundleRecordForBundleAtURL:(id)arg1;
+ (id)recordType;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithBundleInfoDictionary:(id)arg1 bundleRecordIdentifier:(id)arg2 bundleURL:(id)arg3;
- (id)recordBundleURL;
- (id)recordIdentifier;

@end
