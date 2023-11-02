
@protocol STBundleRecord <NSObject, NSCopying>

@required

+ (id)bundleRecordForBundleAtURL:(NSURL *)arg1;
+ (NSString *)recordType;

- (NSString *)recordIdentifier;

@end
