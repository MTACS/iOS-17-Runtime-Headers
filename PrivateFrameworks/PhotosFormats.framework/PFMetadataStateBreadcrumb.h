
@interface PFMetadataStateBreadcrumb : NSObject {
    NSString * _message;
    unsigned int  _qualityOfService;
    unsigned long long  _threadID;
    double  _timeInterval;
}

@property (readonly, copy) NSString *breadcrumbDescription;
@property (readonly, copy) NSString *message;
@property (readonly) unsigned int qualityOfService;
@property (readonly) unsigned long long threadID;
@property (readonly) double timeInterval;

- (void).cxx_destruct;
- (id)breadcrumbDescription;
- (id)initWithTimeInterval:(double)arg1 message:(id)arg2;
- (id)message;
- (unsigned int)qualityOfService;
- (unsigned long long)threadID;
- (double)timeInterval;

@end
