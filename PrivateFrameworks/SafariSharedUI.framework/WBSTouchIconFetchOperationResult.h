
@interface WBSTouchIconFetchOperationResult : NSObject {
    NSError * _error;
    bool  _favicon;
    bool  _higherPriorityIconDownloadFailedDueToNetworkError;
    NSString * _host;
    NSData * _iconData;
    NSURL * _iconURL;
    bool  _pageRequestDidSucceed;
    NSURLResponse * _response;
    UIImage * _touchIcon;
}

@property (nonatomic, readonly) NSError *error;
@property (nonatomic, readonly) bool failedDueToUnrecoverableNetworkError;
@property (getter=isFavicon, nonatomic, readonly) bool favicon;
@property (nonatomic, readonly) bool higherPriorityIconDownloadFailedDueToNetworkError;
@property (nonatomic, readonly, copy) NSString *host;
@property (nonatomic, readonly) NSData *iconData;
@property (nonatomic, readonly) NSURL *iconURL;
@property (nonatomic, readonly) bool pageRequestDidSucceed;
@property (nonatomic, readonly) NSURLResponse *response;
@property (nonatomic, readonly) UIImage *touchIcon;

+ (id)resultForFetchFailureWithHost:(id)arg1 pageRequestDidSucceed:(bool)arg2 response:(id)arg3 error:(id)arg4;
+ (id)resultWithFavicon:(id)arg1 iconData:(id)arg2 iconURL:(id)arg3 host:(id)arg4 pageRequestDidSucceed:(bool)arg5 response:(id)arg6 higherPriorityIconDownloadFailedDueToNetworkError:(bool)arg7;
+ (id)resultWithTouchIcon:(id)arg1 host:(id)arg2 isFavicon:(bool)arg3 pageRequestDidSucceed:(bool)arg4 response:(id)arg5 higherPriorityIconDownloadFailedDueToNetworkError:(bool)arg6;

- (void).cxx_destruct;
- (id)error;
- (bool)failedDueToUnrecoverableNetworkError;
- (bool)higherPriorityIconDownloadFailedDueToNetworkError;
- (id)host;
- (id)iconData;
- (id)iconURL;
- (id)initWithTouchIcon:(id)arg1 iconData:(id)arg2 iconURL:(id)arg3 host:(id)arg4 isFavicon:(bool)arg5 pageRequestDidSucceed:(bool)arg6 response:(id)arg7 higherPriorityIconDownloadFailedDueToNetworkError:(bool)arg8 error:(id)arg9;
- (bool)isFavicon;
- (bool)pageRequestDidSucceed;
- (id)response;
- (id)touchIcon;

@end
