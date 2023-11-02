
@interface QSSMutableQSSVersionInfo : QSSQSSVersionInfo

@property (nonatomic, copy) NSString *qss_version_brane;
@property (nonatomic, copy) NSString *qss_version_server;
@property (nonatomic, copy) NSString *qss_version_serverkit;
@property (nonatomic, copy) NSString *qss_version_siritts;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (id)qss_version_brane;
- (id)qss_version_server;
- (id)qss_version_serverkit;
- (id)qss_version_siritts;
- (void)setQss_version_brane:(id)arg1;
- (void)setQss_version_server:(id)arg1;
- (void)setQss_version_serverkit:(id)arg1;
- (void)setQss_version_siritts:(id)arg1;

@end
