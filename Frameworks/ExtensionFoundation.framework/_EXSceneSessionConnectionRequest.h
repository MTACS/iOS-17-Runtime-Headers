
@interface _EXSceneSessionConnectionRequest : NSObject <NSSecureCoding> {
    NSXPCListenerEndpoint * _hostEndpoint;
    NSUUID * _identifier;
    _EXSceneSessionParameters * _parameters;
}

@property (retain) NSXPCListenerEndpoint *hostEndpoint;
@property (retain) NSUUID *identifier;
@property (retain) _EXSceneSessionParameters *parameters;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)hostEndpoint;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)parameters;
- (void)setHostEndpoint:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setParameters:(id)arg1;

@end
