
@protocol MGServiceInterfaceProtocol

@required

- (void)HomeKitAccessoryOfType:(void *)arg1 accessoryIdentifier:(void *)arg2 homeIdentifier:(void *)arg3 categoryType:(void *)arg4 name:(void *)arg5 properties:(void *)arg6 completion:(void *)arg7; // needs 7 arg types, found 13: NSString *, NSUUID *, NSUUID *, NSString *, NSString *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, MGGroup *, NSError *, void*
- (void)addMember:(void *)arg1 group:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: MGGroup *, MGGroup *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, MGGroup *, NSError *, void*
- (void)createGroupWithType:(void *)arg1 name:(void *)arg2 members:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 10: NSString *, NSString *, NSSet *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, MGGroup *, NSError *, void*
- (void)deleteGroup:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: MGGroup *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)removeMember:(void *)arg1 group:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: MGGroup *, MGGroup *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, MGGroup *, NSError *, void*
- (void)setName:(void *)arg1 group:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: NSString *, MGGroup *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, MGGroup *, NSError *, void*
- (void)startQueryWithPredicate:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 9: NSPredicate *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSUUID *, NSArray *, NSError *, void*
- (void)stopQuery:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSUUID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end
