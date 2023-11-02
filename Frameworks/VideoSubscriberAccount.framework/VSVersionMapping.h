
@interface VSVersionMapping : NSObject {
    NSString * _iOSSupportVersion;
    NSDictionary * _mapping;
}

@property (nonatomic, readonly) NSString *iOSSupportVersion;
@property (nonatomic, retain) NSDictionary *mapping;

+ (id)sharedInstance;
+ (id)systemVersion;

- (void).cxx_destruct;
- (id)iOSSupportVersion;
- (id)init;
- (id)mapping;
- (void)setMapping:(id)arg1;

@end
