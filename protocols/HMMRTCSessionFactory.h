
@protocol HMMRTCSessionFactory

@required

- (<HMMRTCSession> *)sessionWithUUID:(NSUUID *)arg1 serviceName:(NSString *)arg2 uploadImmediately:(bool)arg3 commonFields:(NSDictionary *)arg4;

@end
