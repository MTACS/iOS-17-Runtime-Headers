
@interface TAStagedSuspiciousDevice : NSObject <NSSecureCoding> {
    TASuspiciousDevice * _detection;
    NSDate * _keepInStagingUntil;
}

@property (nonatomic, readonly) TASuspiciousDevice *detection;
@property (nonatomic, copy) NSDate *keepInStagingUntil;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (id)descriptionDictionary;
- (id)detection;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDetection:(id)arg1 keepInStagingUntil:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)keepInStagingUntil;
- (void)setKeepInStagingUntil:(id)arg1;

@end
