
@interface CRKDisconnectIDSConnectionRequest : CATTaskRequest {
    DMFControlGroupIdentifier * _courseIdentifier;
    NSString * _instructorIdentifier;
}

@property (nonatomic, retain) DMFControlGroupIdentifier *courseIdentifier;
@property (nonatomic, copy) NSString *instructorIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)courseIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)instructorIdentifier;
- (void)setCourseIdentifier:(id)arg1;
- (void)setInstructorIdentifier:(id)arg1;

@end
