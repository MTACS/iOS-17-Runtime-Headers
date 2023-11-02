
@interface SiriUIConfiguration : NSObject <NSCopying> {
    bool  _allowResizingBetweenModes;
    long long  _flamesViewFidelity;
    bool  _isSystemHostedPresentation;
    long long  _siriViewMode;
}

@property (nonatomic, readonly) bool allowResizingBetweenModes;
@property (nonatomic, readonly) long long flamesViewFidelity;
@property (nonatomic, readonly) bool isSystemHostedPresentation;
@property (nonatomic, readonly) long long siriViewMode;

- (id)_NSStringFromSiriViewMode:(long long)arg1;
- (bool)allowResizingBetweenModes;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (long long)flamesViewFidelity;
- (id)initWithFlamesViewFidelity:(long long)arg1 isSystemHostedPresentation:(bool)arg2;
- (id)initWithFlamesViewFidelity:(long long)arg1 isSystemHostedPresentation:(bool)arg2 allowResizingBetweenModes:(bool)arg3 siriViewMode:(long long)arg4;
- (bool)isSystemHostedPresentation;
- (long long)siriViewMode;

@end
