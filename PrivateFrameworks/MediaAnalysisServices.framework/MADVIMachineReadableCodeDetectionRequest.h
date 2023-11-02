
@interface MADVIMachineReadableCodeDetectionRequest : MADRequest {
    NSArray * _symbologies;
}

@property (nonatomic, readonly) NSArray *symbologies;

+ (bool)supportsSecureCoding;
+ (unsigned long long)targetResolution;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithSymbologies:(id)arg1;
- (id)symbologies;

@end
