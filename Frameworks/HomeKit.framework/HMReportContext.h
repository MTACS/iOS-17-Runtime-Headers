
@interface HMReportContext : NSObject <NSCopying, NSMutableCopying> {
    NSString * _reportDomain;
    double  _reportTimeout;
    NSData * _requestInfo;
}

@property (nonatomic, readonly) NSString *reportDomain;
@property (nonatomic) double reportTimeout;
@property (nonatomic, readonly) NSData *requestInfo;

+ (id)reportContextWithDomain:(id)arg1 requestInfo:(id)arg2 timeout:(double)arg3;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithReportDomain:(id)arg1 requestInfo:(id)arg2 timeout:(double)arg3;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)reportDomain;
- (double)reportTimeout;
- (id)requestInfo;
- (void)setReportTimeout:(double)arg1;

@end
