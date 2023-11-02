
@protocol HKDataCollectorTaskServerInterface <HKUnitTestingTaskServerInterface>

@required

- (void)remote_insertDatums:(void *)arg1 device:(void *)arg2 metadata:(void *)arg3 batchUUID:(void *)arg4 registrationUUID:(void *)arg5 completion:(void *)arg6; // needs 6 arg types, found 12: NSArray *, HKDevice *, NSDictionary *, NSUUID *, NSUUID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)remote_registerWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)remote_synchronizeWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*

@end
