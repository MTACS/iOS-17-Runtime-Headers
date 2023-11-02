
@interface ICQAppCloudStorage : NSObject <NSCopying, NSSecureCoding> {
    NSString * _bundleID;
    NSURL * _liftUIURL;
    NSURL * _ruiURL;
    NSNumber * _storageUsed;
}

@property (nonatomic, copy) NSString *bundleID;
@property (nonatomic, retain) NSURL *liftUIURL;
@property (nonatomic, retain) NSURL *ruiURL;
@property (nonatomic, retain) NSNumber *storageUsed;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)bundleID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)liftUIURL;
- (id)ruiURL;
- (void)setBundleID:(id)arg1;
- (void)setLiftUIURL:(id)arg1;
- (void)setRuiURL:(id)arg1;
- (void)setStorageUsed:(id)arg1;
- (id)storageUsed;

@end
