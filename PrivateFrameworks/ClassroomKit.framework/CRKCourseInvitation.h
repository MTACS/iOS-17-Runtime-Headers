
@interface CRKCourseInvitation : NSObject <NSSecureCoding> {
    NSArray * _anchorCertificateDatas;
    unsigned long long  _courseColorType;
    NSString * _courseDescription;
    DMFControlGroupIdentifier * _courseIdentifier;
    unsigned long long  _courseMascotType;
    NSString * _courseName;
    NSData * _instructorImageData;
    NSString * _instructorName;
}

@property (nonatomic, readonly, copy) NSArray *anchorCertificateDatas;
@property (nonatomic, readonly) unsigned long long courseColorType;
@property (nonatomic, readonly, copy) NSString *courseDescription;
@property (nonatomic, readonly, copy) DMFControlGroupIdentifier *courseIdentifier;
@property (nonatomic, readonly) unsigned long long courseMascotType;
@property (nonatomic, readonly, copy) NSString *courseName;
@property (nonatomic, readonly, copy) NSData *instructorImageData;
@property (nonatomic, readonly, copy) NSString *instructorName;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)anchorCertificateDatas;
- (unsigned long long)courseColorType;
- (id)courseDescription;
- (id)courseIdentifier;
- (unsigned long long)courseMascotType;
- (id)courseName;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCourseIdentifier:(id)arg1 courseName:(id)arg2 courseDescription:(id)arg3 courseMascotType:(unsigned long long)arg4 courseColorType:(unsigned long long)arg5 instructorName:(id)arg6 anchorCertificateDatas:(id)arg7;
- (id)initWithCourseIdentifier:(id)arg1 courseName:(id)arg2 courseDescription:(id)arg3 courseMascotType:(unsigned long long)arg4 courseColorType:(unsigned long long)arg5 instructorName:(id)arg6 anchorCertificates:(id)arg7;
- (id)initWithCourseIdentifier:(id)arg1 courseName:(id)arg2 courseDescription:(id)arg3 courseMascotType:(unsigned long long)arg4 courseColorType:(unsigned long long)arg5 instructorName:(id)arg6 instructorImageData:(id)arg7 anchorCertificateDatas:(id)arg8;
- (id)initWithCourseIdentifier:(id)arg1 courseName:(id)arg2 courseDescription:(id)arg3 courseMascotType:(unsigned long long)arg4 courseColorType:(unsigned long long)arg5 instructorName:(id)arg6 instructorImageData:(id)arg7 anchorCertificates:(id)arg8;
- (id)initWithCourseIdentifier:(id)arg1 courseName:(id)arg2 courseDescription:(id)arg3 instructorName:(id)arg4 anchorCertificates:(id)arg5;
- (id)initWithCourseIdentifier:(id)arg1 courseName:(id)arg2 courseDescription:(id)arg3 instructorName:(id)arg4 instructorImageData:(id)arg5 anchorCertificates:(id)arg6;
- (id)instructorImageData;
- (id)instructorName;
- (bool)isEqual:(id)arg1;

@end
