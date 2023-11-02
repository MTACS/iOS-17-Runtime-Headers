
@interface BPSAppleIDDevices : NSObject

+ (void)fetchFamilyMemberForAltDSID:(id)arg1 username:(id)arg2 withCompletion:(id /* block */)arg3;
+ (void)fetchFamilyMemberForDevice:(id)arg1 withCompletion:(id /* block */)arg2;
+ (bool)isNetworkError:(id)arg1;

@end
