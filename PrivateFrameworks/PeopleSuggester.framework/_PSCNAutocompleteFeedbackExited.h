
@interface _PSCNAutocompleteFeedbackExited : NSObject <NSSecureCoding> {
    long long  _exitStatus;
}

@property (nonatomic, readonly) long long exitStatus;

+ (bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (long long)exitStatus;
- (id)initWithCoder:(id)arg1;
- (id)initWithExitStatus:(long long)arg1;

@end
