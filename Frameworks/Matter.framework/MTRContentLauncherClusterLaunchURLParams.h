
@interface MTRContentLauncherClusterLaunchURLParams : NSObject <NSCopying> {
    MTRContentLauncherClusterBrandingInformationStruct * _brandingInformation;
    NSString * _contentURL;
    NSString * _displayString;
    NSNumber * _serverSideProcessingTimeout;
    NSNumber * _timedInvokeTimeoutMs;
}

@property (nonatomic, copy) MTRContentLauncherClusterBrandingInformationStruct *brandingInformation;
@property (nonatomic, copy) NSString *contentURL;
@property (nonatomic, copy) NSString *displayString;
@property (nonatomic, copy) NSNumber *serverSideProcessingTimeout;
@property (nonatomic, copy) NSNumber *timedInvokeTimeoutMs;

- (void).cxx_destruct;
- (id)brandingInformation;
- (id)contentURL;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)displayString;
- (id)init;
- (id)serverSideProcessingTimeout;
- (void)setBrandingInformation:(id)arg1;
- (void)setContentURL:(id)arg1;
- (void)setDisplayString:(id)arg1;
- (void)setServerSideProcessingTimeout:(id)arg1;
- (void)setTimedInvokeTimeoutMs:(id)arg1;
- (id)timedInvokeTimeoutMs;

@end
