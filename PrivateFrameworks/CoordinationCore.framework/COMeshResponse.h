
@interface COMeshResponse : COMeshCommand {
    NSError * _error;
}

@property (nonatomic, readonly) NSError *error;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)error;
- (id)initWithCoder:(id)arg1;
- (id)initWithError:(id)arg1;

@end
