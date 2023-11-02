
@interface FACircleContext : NSObject <NSCoding, NSSecureCoding> {
    unsigned long long  _activityIndicatorStyle;
    NSDictionary * _additionalParameters;
    AKAppleIDAuthenticationContext * _authContext;
    NSString * _clientBundleID;
    NSString * _clientName;
    NSDictionary * _ephemeralAuthResults;
    NSString * _eventType;
    NSString * _urlEndpoint;
    NSURL * _urlForContext;
}

@property (nonatomic) unsigned long long activityIndicatorStyle;
@property (nonatomic, copy) NSDictionary *additionalParameters;
@property (nonatomic, retain) AKAppleIDAuthenticationContext *authContext;
@property (nonatomic, copy) NSString *clientBundleID;
@property (nonatomic, copy) NSString *clientName;
@property (nonatomic, readonly, copy) NSData *dataRepresentation;
@property (nonatomic, retain) NSDictionary *ephemeralAuthResults;
@property (nonatomic, readonly, copy) NSString *eventType;
@property (nonatomic, copy) NSString *urlEndpoint;
@property (nonatomic, copy) NSURL *urlForContext;

+ (id)contextWithData:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned long long)activityIndicatorStyle;
- (id)additionalParameters;
- (id)authContext;
- (id)clientBundleID;
- (id)clientName;
- (id)dataRepresentation;
- (id)debugDescription;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)ephemeralAuthResults;
- (id)eventType;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithEventType:(id)arg1;
- (bool)isPlatformSupported;
- (void)setActivityIndicatorStyle:(unsigned long long)arg1;
- (void)setAdditionalParameters:(id)arg1;
- (void)setAuthContext:(id)arg1;
- (void)setClientBundleID:(id)arg1;
- (void)setClientName:(id)arg1;
- (void)setEphemeralAuthResults:(id)arg1;
- (void)setUrlEndpoint:(id)arg1;
- (void)setUrlForContext:(id)arg1;
- (id)urlEndpoint;
- (id)urlForContext;

@end
