
@interface GEOQuickLink : NSObject {
    GEOPDQuickLinkItem * _quickLinkItem;
}

@property (nonatomic, readonly) NSString *URLString;
@property (nonatomic, readonly) NSString *appAdamID;
@property (nonatomic, readonly) NSString *bundleID;
@property (nonatomic, readonly) NSString *imageName;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) long long type;

- (void).cxx_destruct;
- (id)URLString;
- (id)appAdamID;
- (id)bundleID;
- (id)imageName;
- (id)initWithQuickLink:(id)arg1;
- (id)title;
- (long long)type;

@end
