
@interface EDAMManageNoteSharesError : FATObject {
    NSNumber * _identityID;
    EDAMNotFoundException * _notFoundException;
    EDAMUserException * _userException;
    NSNumber * _userID;
}

@property (nonatomic, retain) NSNumber *identityID;
@property (nonatomic, retain) EDAMNotFoundException *notFoundException;
@property (nonatomic, retain) EDAMUserException *userException;
@property (nonatomic, retain) NSNumber *userID;

+ (id)structFields;
+ (id)structName;

- (void).cxx_destruct;
- (id)identityID;
- (id)notFoundException;
- (void)setIdentityID:(id)arg1;
- (void)setNotFoundException:(id)arg1;
- (void)setUserException:(id)arg1;
- (void)setUserID:(id)arg1;
- (id)userException;
- (id)userID;

@end
