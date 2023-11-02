
@interface SUCoreLog : NSObject {
    NSString * _category;
    NSObject<OS_os_log> * _oslog;
}

@property (nonatomic, readonly, retain) NSString *category;
@property (nonatomic, readonly, retain) NSObject<OS_os_log> *oslog;

+ (id)sharedLogger;

- (void).cxx_destruct;
- (id)category;
- (id)initWithCategory:(id)arg1;
- (id)oslog;

@end
