
@interface _AAURLSessionDelegate : NSObject <NSURLSessionDataDelegate, NSURLSessionDelegate, NSURLSessionTaskDelegate> {
    <NSURLSessionDataDelegate><NSURLSessionDelegate><NSURLSessionTaskDelegate> * _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <NSURLSessionDataDelegate><NSURLSessionDelegate><NSURLSessionTaskDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (id)delegate;
- (id)init;
- (id)initWithDelegate:(id)arg1;
- (void)setDelegate:(id)arg1;

@end
