
@interface STFamilyMember : NSObject {
    NSNumber * _DSID;
    NSString * _altDSID;
    NSString * _appleID;
    NSString * _firstName;
    bool  _isMe;
    bool  _isOrganizer;
    bool  _isParent;
    NSString * _lastName;
    NSString * _memberType;
}

@property (nonatomic, readonly, copy) NSNumber *DSID;
@property (nonatomic, readonly, copy) NSString *altDSID;
@property (nonatomic, readonly, copy) NSString *appleID;
@property (nonatomic, readonly, copy) NSString *firstName;
@property (nonatomic) bool isMe;
@property (nonatomic) bool isOrganizer;
@property (nonatomic) bool isParent;
@property (nonatomic, readonly, copy) NSString *lastName;
@property (nonatomic, readonly, copy) NSString *memberType;

- (void).cxx_destruct;
- (id)DSID;
- (id)altDSID;
- (id)appleID;
- (id)description;
- (id)firstName;
- (id)initWithDSID:(id)arg1 altDSID:(id)arg2 appleID:(id)arg3 memberType:(id)arg4 firstName:(id)arg5 lastName:(id)arg6 isMe:(bool)arg7 isParent:(bool)arg8 isOrganizer:(bool)arg9;
- (bool)isMe;
- (bool)isOrganizer;
- (bool)isParent;
- (id)lastName;
- (id)memberType;
- (void)setIsMe:(bool)arg1;
- (void)setIsOrganizer:(bool)arg1;
- (void)setIsParent:(bool)arg1;

@end
