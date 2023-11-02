
@interface AMSAppleCardSilentEnrollment : NSObject <AMSBagConsumer>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)bagKeySet;
+ (id)bagSubProfile;
+ (id)bagSubProfileVersion;
+ (id)createBagForSubProfile;
+ (id)gsTokenForAccount:(id)arg1 error:(id*)arg2;
+ (id)headersForAccount:(id)arg1;

@end
