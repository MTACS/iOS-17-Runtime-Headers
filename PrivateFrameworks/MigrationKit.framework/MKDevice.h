
@interface MKDevice : NSObject {
    NSString * _deviceFamily;
    long long  _iconSize;
    bool  _isiPhone;
    NSString * _systemName;
    NSString * _systemVersion;
}

@property (nonatomic, copy) NSString *deviceFamily;
@property (nonatomic) long long iconSize;
@property (nonatomic) bool isiPhone;
@property (nonatomic, copy) NSString *systemName;
@property (nonatomic, copy) NSString *systemVersion;

- (void).cxx_destruct;
- (id)deviceFamily;
- (long long)iconSize;
- (id)init;
- (bool)isiPhone;
- (void)setDeviceFamily:(id)arg1;
- (void)setIconSize:(long long)arg1;
- (void)setIsiPhone:(bool)arg1;
- (void)setSystemName:(id)arg1;
- (void)setSystemVersion:(id)arg1;
- (id)systemName;
- (id)systemVersion;

@end
