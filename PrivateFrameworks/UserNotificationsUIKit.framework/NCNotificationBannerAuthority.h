
@interface NCNotificationBannerAuthority : NSObject <BNConsidering> {
    <BNConsideringDelegate> * _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <BNConsideringDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)requesterIdentifier;

- (void).cxx_destruct;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (long long)shouldOverlapPresentable:(id)arg1 withPresentable:(id)arg2;
- (long long)shouldPresentPresentable:(id)arg1 withPresentedPresentables:(id)arg2 responsiblePresentable:(out id*)arg3;

@end
