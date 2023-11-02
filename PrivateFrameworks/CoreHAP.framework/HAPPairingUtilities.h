
@interface HAPPairingUtilities : HMFObject

+ (id)createAddPairingRequestForPairingIdentity:(id)arg1 error:(id*)arg2;
+ (id)createListPairingsRequest:(id*)arg1;
+ (id)createRemovePairingRequestForPairingIdentity:(id)arg1 error:(id*)arg2;
+ (bool)parseAddPairingResponse:(id)arg1 error:(id*)arg2;
+ (id)parseListPairingsResponse:(id)arg1 error:(id*)arg2;
+ (bool)parseRemovePairingResponse:(id)arg1 error:(id*)arg2;

@end
