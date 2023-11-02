
@interface SBDisplayArrangementItem : NSObject <BSDescriptionStreamable> {
    FBSDisplayIdentity * _displayIdentity;
    unsigned int  _edge;
    double  _offset;
    FBSDisplayIdentity * _relativeDisplayIdentity;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) FBSDisplayIdentity *displayIdentity;
@property (nonatomic, readonly) unsigned int edge;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) double offset;
@property (nonatomic, readonly) FBSDisplayIdentity *relativeDisplayIdentity;
@property (readonly) Class superclass;

+ (id)_preferredArrangementOfExternalDisplay:(id)arg1 relativeToEmbeddedDisplay:(id)arg2 preferences:(id)arg3;
+ (id)preferredArrangementOfDisplay:(id)arg1 relativeTo:(id)arg2 preferences:(id)arg3;

- (void).cxx_destruct;
- (void)appendDescriptionToFormatter:(id)arg1;
- (id)description;
- (id)displayIdentity;
- (unsigned int)edge;
- (unsigned long long)hash;
- (id)initWithDisplayIdentity:(id)arg1 relativeDisplayIdentity:(id)arg2 edge:(unsigned int)arg3 offset:(double)arg4;
- (bool)isEqual:(id)arg1;
- (double)offset;
- (id)relativeDisplayIdentity;

@end
