
@interface PKSharedPaymentWebServiceArchiver : NSObject <PKPaymentWebServiceArchiver>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedPaymentWebServiceArchiver;

- (void)archiveBackgroundContext:(id)arg1;
- (void)archiveContext:(id)arg1;

@end
