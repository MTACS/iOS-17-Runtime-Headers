
@interface HAP2EncodingUtils : NSObject

+ (id)addPairingRequestWithIdentity:(id)arg1 error:(id*)arg2;
+ (bool)parseAddOrRemovePairingRequestResponse:(id)arg1 error:(id*)arg2;
+ (id)removePairingRequestWithIdentifier:(id)arg1 error:(id*)arg2;

@end
