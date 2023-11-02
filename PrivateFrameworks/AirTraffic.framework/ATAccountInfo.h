
@interface ATAccountInfo : NSObject <NSCopying> {
    NSNumber * _DSID;
    NSString * _altDSID;
    NSString * _appleID;
}

@property (nonatomic, readonly) NSNumber *DSID;
@property (nonatomic, readonly) NSString *altDSID;
@property (nonatomic, readonly) NSString *appleID;

- (void).cxx_destruct;
- (id)DSID;
- (id)altDSID;
- (id)appleID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;

@end
