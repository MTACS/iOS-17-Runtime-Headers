
@interface TRIAllocationStatus : NSObject <NSCopying, NSSecureCoding> {
    NSDate * _date;
    unsigned char  _type;
}

@property (nonatomic, readonly) NSDate *date;
@property (nonatomic, readonly) unsigned char type;

+ (id)_defaultProvider;
+ (id)activeBMLTInformationWithError:(id*)arg1;
+ (id)activeExperimentInformationWithError:(id*)arg1;
+ (id)categoricalValueForExperimentAllocationStatus:(unsigned char)arg1;
+ (id)categoricalValueForRolloutAllocationStatus:(unsigned char)arg1;
+ (id)defaultProvider;
+ (id)getDateFromCursor:(id)arg1;
+ (id)internalToExternalStatusMapping;
+ (id)notificationNameForDeploymentEnvironment:(int)arg1;
+ (id)sampleAllocationStatuses:(id)arg1 correlationId:(id)arg2 nrSamples:(unsigned int)arg3;
+ (bool)supportsSecureCoding;
+ (id)syncProxyWithErrorHandler:(id /* block */)arg1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)date;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(unsigned char)arg1 date:(id)arg2;
- (bool)isEqualToStatus:(id)arg1;
- (unsigned char)type;

@end
