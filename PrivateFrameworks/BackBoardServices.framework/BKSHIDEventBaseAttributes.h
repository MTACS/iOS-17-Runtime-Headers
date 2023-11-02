
@interface BKSHIDEventBaseAttributes : NSObject <BSDescriptionProviding, BSDescriptionStreamable, BSProtobufSerializable, NSCopying> {
    BKSHIDEventAuthenticationMessage * _authenticationMessage;
    BKSHIDEventDisplay * _display;
    BKSHIDEventDeferringEnvironment * _environment;
    unsigned short  _options;
    int  _source;
    BKSHIDEventDeferringToken * _token;
}

@property (nonatomic, retain) BKSHIDEventAuthenticationMessage *authenticationMessage;
@property (nonatomic, readonly) unsigned int contextID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) BKSHIDEventDisplay *display;
@property (nonatomic, retain) BKSHIDEventDeferringEnvironment *environment;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned short options;
@property (nonatomic) int source;
@property (readonly) Class superclass;
@property (nonatomic, retain) BKSHIDEventDeferringToken *token;

+ (id)baseAttributesFromProvider:(id)arg1;
+ (id)protobufSchema;

- (void).cxx_destruct;
- (void)appendDescriptionToFormatter:(id)arg1;
- (id)authenticationMessage;
- (unsigned int)contextID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)display;
- (id)environment;
- (bool)isEqual:(id)arg1;
- (unsigned short)options;
- (void)setAuthenticationMessage:(id)arg1;
- (void)setDisplay:(id)arg1;
- (void)setEnvironment:(id)arg1;
- (void)setOptions:(unsigned short)arg1;
- (void)setSource:(int)arg1;
- (void)setToken:(id)arg1;
- (int)source;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)token;

@end
