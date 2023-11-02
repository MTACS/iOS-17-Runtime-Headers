
@interface SXEmailActionActivityProvider : NSObject <SXActionActivityProvider> {
    <SXMailPresenter> * _mailPresenter;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <SXMailPresenter> *mailPresenter;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)activityGroupForAction:(id)arg1;
- (void)composeMailTo:(id)arg1 subject:(id)arg2;
- (id)initWithMailPresenter:(id)arg1;
- (id)mailPresenter;

@end
