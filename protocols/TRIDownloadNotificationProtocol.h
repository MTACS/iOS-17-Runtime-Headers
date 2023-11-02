
@protocol TRIDownloadNotificationProtocol <NSObject>

@required

- (NSError *)error;
- (unsigned long long)progress;
- (unsigned long long)progressMaxValue;
- (unsigned long long)type;

@end
