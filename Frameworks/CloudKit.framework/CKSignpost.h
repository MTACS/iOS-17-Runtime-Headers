
@interface CKSignpost : NSObject {
    unsigned long long  _identifier;
    NSObject<OS_os_log> * _log;
}

@property (nonatomic, readonly) unsigned long long identifier;
@property (nonatomic, readonly) NSObject<OS_os_log> *log;

+ (id)signpost;

- (void).cxx_destruct;
- (unsigned long long)identifier;
- (id)init;
- (id)initWithLog:(id)arg1;
- (id)log;

@end
