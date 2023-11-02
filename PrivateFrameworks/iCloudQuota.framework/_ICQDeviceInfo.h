
@interface _ICQDeviceInfo : NSObject {
    NSString * _bundleId;
    NSString * _key;
    NSDictionary * _wordsToReplace;
}

@property (nonatomic, retain) NSString *bundleId;
@property (nonatomic, retain) NSString *key;
@property (nonatomic, retain) NSDictionary *wordsToReplace;

+ (id)defaultDeviceInfoWithBundleId:(id)arg1;
+ (id)getInfoWithBundleId:(id)arg1;
+ (void)getInfoWithBundleId:(id)arg1 completion:(id /* block */)arg2;
+ (id)templateKeyForItemCount:(id)arg1;
+ (id)templateKeyForPhotos:(unsigned long long)arg1 video:(unsigned long long)arg2;
+ (id)wordsToReplaceForItemCount:(id)arg1;

- (void).cxx_destruct;
- (id)bundleId;
- (id)key;
- (void)setBundleId:(id)arg1;
- (void)setKey:(id)arg1;
- (void)setWordsToReplace:(id)arg1;
- (id)wordsToReplace;

@end
