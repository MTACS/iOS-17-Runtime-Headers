
@interface SCUpdateUserStartDateCommand : NSObject <SCWZoneCommand> {
    void mergePolicy;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  startDate;
}

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (void)executeWithZone:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;

@end
