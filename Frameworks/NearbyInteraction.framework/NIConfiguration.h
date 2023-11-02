
@interface NIConfiguration : NSObject <NSCopying, NSSecureCoding> {
    unsigned long long  _enabledGestures;
    bool  _supportsCameraAssistance;
    unsigned long long  _suspensionPolicy;
}

@property unsigned long long enabledGestures;
@property bool supportsCameraAssistance;
@property unsigned long long suspensionPolicy;

+ (id)new;
+ (bool)supportsSecureCoding;

- (bool)_internalIsCameraAssistanceEnabled;
- (bool)_internalIsCameraAssistanceInClientProcess;
- (bool)_internalIsExtendedDistanceMeasurementEnabled;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)descriptionInternal;
- (unsigned long long)enabledGestures;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initInternal;
- (id)initWithCoder:(id)arg1;
- (id)initWithConfiguration:(id)arg1;
- (void)setEnabledGestures:(unsigned long long)arg1;
- (void)setSupportsCameraAssistance:(bool)arg1;
- (void)setSuspensionPolicy:(unsigned long long)arg1;
- (bool)supportsCameraAssistance;
- (unsigned long long)suspensionPolicy;

@end
