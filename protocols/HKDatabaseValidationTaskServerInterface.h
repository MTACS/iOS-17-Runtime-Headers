
@protocol HKDatabaseValidationTaskServerInterface

@required

- (void)remote_validateDatabase:(void *)arg1 clientCompletionHandler:(void *)arg2 errorHandlerIdentifier:(void *)arg3; // needs 3 arg types, found 9: long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*, NSString *
- (void)remote_validateEntitiesWithClientCompletionHandler:(void *)arg1 errorHandlerIdentifier:(void *)arg2; // needs 2 arg types, found 8: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*, NSString *

@end
