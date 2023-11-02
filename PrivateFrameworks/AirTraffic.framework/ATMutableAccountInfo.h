
@interface ATMutableAccountInfo : ATAccountInfo

@property (nonatomic, copy) NSNumber *DSID;
@property (nonatomic, copy) NSString *altDSID;
@property (nonatomic, copy) NSString *appleID;

- (void)setAltDSID:(id)arg1;
- (void)setAppleID:(id)arg1;
- (void)setDSID:(id)arg1;

@end
