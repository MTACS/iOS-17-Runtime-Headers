
@interface PXSharedLibraryParticipantValidationManager : NSObject {
    NSObject<OS_dispatch_queue> * _ivarQueue;
    NSMutableDictionary * _queryAddressesToQueries;
}

- (void).cxx_destruct;
- (id)init;
- (void)requestValidationForPhoneNumbers:(id)arg1 emailAddresses:(id)arg2 resultHandler:(id /* block */)arg3;

@end
