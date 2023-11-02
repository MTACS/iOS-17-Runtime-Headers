
@interface OS_MobileGestalt : NSObject {
    NSObject<OS_os_log> * _log;
    NSDictionary * _overrides;
}

@property (nonatomic) NSObject<OS_os_log> *log;
@property (nonatomic, retain) NSDictionary *overrides;

- (void).cxx_destruct;
- (id)init;
- (id)log;
- (id)overrides;
- (void)setLog:(id)arg1;
- (void)setOverrides:(id)arg1;

@end
