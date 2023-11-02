
@protocol DACardDAVRecord <NSObject>

@required

- (bool)isAccount;
- (bool)isContact;
- (bool)isContainer;
- (bool)isGroup;
- (void)markForDeletion;
- (void)updateSaveRequest:(CNSaveRequest *)arg1;

@end
