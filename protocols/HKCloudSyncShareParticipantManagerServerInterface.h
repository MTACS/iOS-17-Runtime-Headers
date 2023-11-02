
@protocol HKCloudSyncShareParticipantManagerServerInterface <NSObject>

@required

- (void)remote_fetchAllShareParticipantEmailAddressesForSharingType:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)remote_fetchSharingParticipantStatus:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, void*
- (void)remote_revokeAccessForAllShareParticipantsForSharingType:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)remote_tearDownHealthSharingForProfile:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: HKProfileIdentifier *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*

@end
