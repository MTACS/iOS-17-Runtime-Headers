
@interface CRKInstructor : NSObject <NSSecureCoding> {
    bool  _allowsStudentInitiatedDisconnection;
    NSString * _courseName;
    bool  _disallowsClassroomAirDropOverLocalNetwork;
    NSString * _displayName;
    NSData * _imageData;
    bool  _observingStudentScreen;
    DMFControlSessionIdentifier * _sessionIdentifier;
    NSString * _userIdentifier;
}

@property (nonatomic) bool allowsStudentInitiatedDisconnection;
@property (nonatomic, copy) NSString *courseName;
@property (nonatomic, readonly, copy) NSDictionary *dictionaryValue;
@property (nonatomic) bool disallowsClassroomAirDropOverLocalNetwork;
@property (nonatomic, copy) NSString *displayName;
@property (nonatomic, retain) NSData *imageData;
@property (getter=isObservingStudentScreen, nonatomic) bool observingStudentScreen;
@property (nonatomic, copy) DMFControlSessionIdentifier *sessionIdentifier;
@property (nonatomic, copy) NSString *userIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)allowsStudentInitiatedDisconnection;
- (id)courseName;
- (id)dictionaryValue;
- (bool)disallowsClassroomAirDropOverLocalNetwork;
- (id)displayName;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)imageData;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToInstructor:(id)arg1;
- (bool)isObservingStudentScreen;
- (id)sessionIdentifier;
- (void)setAllowsStudentInitiatedDisconnection:(bool)arg1;
- (void)setCourseName:(id)arg1;
- (void)setDisallowsClassroomAirDropOverLocalNetwork:(bool)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setImageData:(id)arg1;
- (void)setObservingStudentScreen:(bool)arg1;
- (void)setSessionIdentifier:(id)arg1;
- (void)setUserIdentifier:(id)arg1;
- (id)userIdentifier;

@end
