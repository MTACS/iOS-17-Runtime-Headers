
@interface IKServiceRequest : NSObject {
    IKAppContext * _appContext;
    <IKServiceRequestDelegate> * _delegate;
    IKServiceContext * _serviceContext;
    struct { 
        bool hasDidCompleteWithStatus; 
    }  _srDelegateFlags;
    int  _state;
}

@property (nonatomic, readonly) IKAppContext *appContext;
@property (nonatomic) <IKServiceRequestDelegate> *delegate;
@property (nonatomic, readonly) IKServiceContext *serviceContext;

- (void).cxx_destruct;
- (void)_completedWithStatus:(long long)arg1 errorDictionary:(id)arg2;
- (id)appContext;
- (void)cancel;
- (id)delegate;
- (id)initWithAppContext:(id)arg1 serviceContext:(id)arg2;
- (void)send;
- (id)serviceContext;
- (void)setDelegate:(id)arg1;

@end
