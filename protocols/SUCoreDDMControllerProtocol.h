
@protocol SUCoreDDMControllerProtocol <NSObject>

@required

- (bool)cancelUpdate:(SUCoreDDMDeclaration *)arg1;
- (bool)cancelUpdateForKey:(NSString *)arg1 withError:(id*)arg2;
- (bool)scheduleUpdate:(SUCoreDDMDeclaration *)arg1;

@optional

- (SUCoreDDMDeclaration *)declarationWithError:(id*)arg1;
- (NSArray *)declarationsWithError:(id*)arg1;
- (void)getDDMStatusWithDomain:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, void*
- (void)getDDMStatusWithKeys:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*

@end
