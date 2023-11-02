
@interface EXBDisplayTransformDescriptor : NSObject <BSDescriptionStreamable, NSCopying, NSMutableCopying> {
    bool  _cloningSupported;
    NSString * _derivedIdentifier;
    bool  _mainLike;
}

@property (getter=isCloningSupported, nonatomic, readonly) bool cloningSupported;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly, copy) NSString *derivedIdentifier;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isMainLike, nonatomic, readonly) bool mainLike;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)appendDescriptionToFormatter:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)derivedIdentifier;
- (bool)derivesDisplays;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (id)initWithDescriptor:(id)arg1;
- (bool)isCloningSupported;
- (bool)isEqual:(id)arg1;
- (bool)isMainLike;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (bool)shouldTransformConnectingDisplays;
- (void)transformPhysicalDisplayWithBuilder:(id)arg1;

@end
