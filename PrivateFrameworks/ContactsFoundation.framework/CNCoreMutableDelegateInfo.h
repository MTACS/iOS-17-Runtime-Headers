
@interface CNCoreMutableDelegateInfo : CNCoreDelegateInfo

@property (nonatomic, copy) NSString *altDSID;
@property (nonatomic, copy) NSString *appleID;
@property (nonatomic, copy) NSNumber *dsid;
@property (nonatomic) bool isMe;
@property (nonatomic, copy) NSPersonNameComponents *nameComponents;
@property (nonatomic, copy) NSString *principalPath;

- (id)altDSID;
- (id)appleID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dsid;
- (bool)isMe;
- (id)nameComponents;
- (id)principalPath;
- (void)setAltDSID:(id)arg1;
- (void)setAppleID:(id)arg1;
- (void)setDsid:(id)arg1;
- (void)setIsMe:(bool)arg1;
- (void)setNameComponents:(id)arg1;
- (void)setPrincipalPath:(id)arg1;

@end
