
@interface AMSUIEngagementContentRecord : NSObject {
    void app;
    void cacheKey;
    void contentExtension;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  fallbackURL;
    void version;
}

@property (nonatomic, readonly) NSString *app;
@property (nonatomic, readonly) NSString *cacheKey;
@property (nonatomic, readonly) NSString *contentExtension;
@property (nonatomic, readonly) NSURL *fallbackURL;
@property (nonatomic, readonly) NSString *version;

+ (bool)isURLEngagementContent:(id)arg1;

- (void).cxx_destruct;
- (id)app;
- (id)cacheKey;
- (id)contentExtension;
- (id)fallbackURL;
- (id)init;
- (id)initWithURL:(id)arg1;
- (id)version;

@end
