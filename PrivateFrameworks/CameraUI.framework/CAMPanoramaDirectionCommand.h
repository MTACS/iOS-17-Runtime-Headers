
@interface CAMPanoramaDirectionCommand : CAMCaptureCommand {
    long long  __direction;
}

@property (nonatomic, readonly) long long _direction;

- (long long)_direction;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)executeWithContext:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDirection:(long long)arg1;

@end
