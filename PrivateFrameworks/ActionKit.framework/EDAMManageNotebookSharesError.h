
@interface EDAMManageNotebookSharesError : FATObject {
    EDAMNotFoundException * _notFoundException;
    EDAMUserException * _userException;
    EDAMUserIdentity * _userIdentity;
}

@property (nonatomic, retain) EDAMNotFoundException *notFoundException;
@property (nonatomic, retain) EDAMUserException *userException;
@property (nonatomic, retain) EDAMUserIdentity *userIdentity;

+ (id)structFields;
+ (id)structName;

- (void).cxx_destruct;
- (id)notFoundException;
- (void)setNotFoundException:(id)arg1;
- (void)setUserException:(id)arg1;
- (void)setUserIdentity:(id)arg1;
- (id)userException;
- (id)userIdentity;

@end
