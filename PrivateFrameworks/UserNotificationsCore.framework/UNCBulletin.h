
@interface UNCBulletin : NSObject <NSCopying, NSSecureCoding> {
    NSString * _bulletinID;
    NSDate * _date;
    NSString * _dismissalID;
    NSString * _message;
    NSString * _sectionID;
    NSString * _subtitle;
    NSString * _title;
    NSString * _universalSectionID;
}

@property (nonatomic, readonly, copy) NSString *bulletinID;
@property (nonatomic, readonly, copy) NSDate *date;
@property (nonatomic, readonly, copy) NSString *dismissalID;
@property (nonatomic, readonly, copy) NSString *message;
@property (nonatomic, readonly, copy) NSString *sectionID;
@property (nonatomic, readonly, copy) NSString *subtitle;
@property (nonatomic, readonly, copy) NSString *title;
@property (nonatomic, readonly, copy) NSString *universalSectionID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)bulletinID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)date;
- (id)description;
- (id)dismissalID;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithBulletinID:(id)arg1 sectionID:(id)arg2 universalSectionID:(id)arg3 dismissalID:(id)arg4 date:(id)arg5 title:(id)arg6 subtitle:(id)arg7 message:(id)arg8;
- (id)initWithCoder:(id)arg1;
- (id)message;
- (id)sectionID;
- (id)subtitle;
- (id)title;
- (id)universalSectionID;

@end
