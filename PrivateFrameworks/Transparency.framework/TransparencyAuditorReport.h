
@interface TransparencyAuditorReport : NSObject {
    long long  _auditorId;
}

@property long long auditorId;
@property (readonly) NSString *auditorName;

- (long long)auditorId;
- (id)auditorName;
- (void)getReportForUUID:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)getReportsForUUIDs:(id)arg1 completionBlock:(id /* block */)arg2;
- (id)initWithAuditorId:(long long)arg1;
- (void)makeReport:(id)arg1 additionalData:(id)arg2 completionBlock:(id /* block */)arg3;
- (void)makeReports:(id)arg1 additionalData:(id)arg2 completionBlock:(id /* block */)arg3;
- (void)setAuditorId:(long long)arg1;

@end
