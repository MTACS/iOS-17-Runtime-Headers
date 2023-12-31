
@interface DMFSetInterfaceOrientationRequest : DMFTaskRequest {
    unsigned long long  _interfaceOrientation;
    bool  _lockOrientation;
}

@property (nonatomic) unsigned long long interfaceOrientation;
@property (nonatomic) bool lockOrientation;

+ (bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)interfaceOrientation;
- (bool)lockOrientation;
- (void)setInterfaceOrientation:(unsigned long long)arg1;
- (void)setLockOrientation:(bool)arg1;

@end
