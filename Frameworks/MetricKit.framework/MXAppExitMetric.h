
@interface MXAppExitMetric : MXMetric {
    MXBackgroundExitData * _backgroundExitData;
    MXForegroundExitData * _foregroundExitData;
}

@property (readonly) MXBackgroundExitData *backgroundExitData;
@property (readonly) MXForegroundExitData *foregroundExitData;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)backgroundExitData;
- (void)encodeWithCoder:(id)arg1;
- (id)foregroundExitData;
- (id)initWithCoder:(id)arg1;
- (id)initWithForegroundExitData:(id)arg1 backgroundExitData:(id)arg2;
- (id)toDictionary;

@end
