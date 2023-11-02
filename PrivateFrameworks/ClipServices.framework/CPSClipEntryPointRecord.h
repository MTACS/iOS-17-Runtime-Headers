
@interface CPSClipEntryPointRecord : NSObject {
    NSString * _appClipBundleID;
    double  _lastABRFetchTime;
    NSString * _webClipIdentifier;
}

@property (nonatomic, copy) NSString *appClipBundleID;
@property (nonatomic) double lastABRFetchTime;
@property (nonatomic, copy) NSString *webClipIdentifier;

- (void).cxx_destruct;
- (id)appClipBundleID;
- (id)initWithSQLiteRow:(id)arg1;
- (double)lastABRFetchTime;
- (void)setAppClipBundleID:(id)arg1;
- (void)setLastABRFetchTime:(double)arg1;
- (void)setWebClipIdentifier:(id)arg1;
- (id)webClipIdentifier;

@end
