
@interface IDSRegistrationControlChosenMetric : NSObject <CUTAWDMetric> {
    long long  _controlRegistrationType;
    bool  _isInterestingRegion;
    long long  _registrationControlStatus;
    long long  _registrationType;
}

@property (readonly) unsigned int awdIdentifier;
@property (readonly) PBCodable<NSCopying> *awdRepresentation;
@property (nonatomic, readonly) long long controlRegistrationType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isInterestingRegion;
@property (readonly) NSString *name;
@property (nonatomic, readonly) long long registrationControlStatus;
@property (readonly) Class superclass;

- (unsigned int)awdIdentifier;
- (id)awdRepresentation;
- (long long)controlRegistrationType;
- (id)initWithControlRegistrationType:(long long)arg1 registrationControlStatus:(long long)arg2 isInterestingRegion:(bool)arg3;
- (bool)isInterestingRegion;
- (id)name;
- (long long)registrationControlStatus;

@end
