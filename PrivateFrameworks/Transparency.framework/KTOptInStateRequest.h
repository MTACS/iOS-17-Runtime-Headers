
@interface KTOptInStateRequest : NSObject <NSSecureCoding> {
    NSString * _application;
    bool  _fetchCloudKit;
    bool  _sync;
    NSString * _uri;
}

@property (retain) NSString *application;
@property bool fetchCloudKit;
@property bool sync;
@property (retain) NSString *uri;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)application;
- (void)encodeWithCoder:(id)arg1;
- (bool)fetchCloudKit;
- (id)initWithApplication:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setApplication:(id)arg1;
- (void)setFetchCloudKit:(bool)arg1;
- (void)setSync:(bool)arg1;
- (void)setUri:(id)arg1;
- (bool)sync;
- (id)uri;

@end
