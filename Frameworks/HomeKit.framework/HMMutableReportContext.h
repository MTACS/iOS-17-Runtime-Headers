
@interface HMMutableReportContext : HMReportContext

@property (nonatomic, retain) NSString *reportDomain;
@property (nonatomic) double reportTimeout;
@property (nonatomic, retain) NSData *requestInfo;

+ (id)reportContextWithDomain:(id)arg1 requestInfo:(id)arg2;
+ (id)reportContextWithDomain:(id)arg1 requestInfo:(id)arg2 timeout:(double)arg3;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithReportDomain:(id)arg1 requestInfo:(id)arg2 timeout:(double)arg3;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;

@end
