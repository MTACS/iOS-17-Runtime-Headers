
@interface WFSiriPunchOutResponse : WFSiriActionResponse {
    bool  _shouldPunchOut;
}

@property (nonatomic, readonly) bool shouldPunchOut;

+ (bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithShouldPunchOut:(bool)arg1;
- (bool)shouldPunchOut;

@end
