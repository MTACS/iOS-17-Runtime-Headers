
@interface DYContextInfo : NSObject <DYGraphicsAPIInfo, NSSecureCoding> {
    int  _api;
    unsigned int  _currentRendererIndex;
    NSString * _debugLabel;
    unsigned long long  _identifier;
    NSArray * _renderers;
    unsigned long long  _sharegroupIdentifier;
}

@property (nonatomic, readonly) int api;
@property (nonatomic, readonly) unsigned int currentRendererIndex;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) NSString *debugLabel;
@property (nonatomic, readonly) NSDictionary *defaultSamplePositions;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *descriptionForBugReport;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long identifier;
@property (nonatomic, readonly, retain) NSArray *renderers;
@property (nonatomic, readonly) unsigned long long sharegroupIdentifier;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (int)api;
- (unsigned int)currentRendererIndex;
- (void)dealloc;
- (id)debugDescription;
- (id)debugLabel;
- (id)defaultSamplePositions;
- (id)description;
- (id)descriptionForBugReport;
- (void)determineTextureUnitLimitsForRendererAtIndex:(unsigned int)arg1 limits:(struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; }*)arg2;
- (void)encodeWithCoder:(id)arg1;
- (void)enumerateBufferTargets:(id /* block */)arg1;
- (void)enumerateFramebufferAttachments:(id /* block */)arg1;
- (void)enumerateFramebufferColorAttachments:(id /* block */)arg1;
- (void)enumerateFramebufferDrawBuffers:(id /* block */)arg1;
- (void)enumerateTextureTargets:(id /* block */)arg1;
- (unsigned long long)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(unsigned long long)arg1 sharegroupIdentifier:(unsigned long long)arg2 renderers:(id)arg3 currentRendererIndex:(unsigned int)arg4 api:(int)arg5;
- (int)rendererType;
- (id)renderers;
- (void)setDebugLabel:(id)arg1;
- (unsigned long long)sharegroupIdentifier;
- (bool)supportsCapabilitiesOfGraphicsAPI:(id)arg1;
- (int)valueForLimit:(id)arg1;

@end
