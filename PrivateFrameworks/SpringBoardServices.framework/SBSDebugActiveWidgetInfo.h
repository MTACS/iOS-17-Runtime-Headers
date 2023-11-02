
@interface SBSDebugActiveWidgetInfo : NSObject <BSDescriptionProviding, BSXPCSecureCoding, NSCopying, NSSecureCoding> {
    unsigned long long  _fakeWidgetCount;
    unsigned long long  _liveWidgetCount;
    unsigned long long  _staticWidgetCount;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned long long fakeWidgetCount;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long liveWidgetCount;
@property (nonatomic) unsigned long long staticWidgetCount;
@property (readonly) Class superclass;

+ (bool)supportsBSXPCSecureCoding;
+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)fakeWidgetCount;
- (unsigned long long)hash;
- (id)initWithBSXPCCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)liveWidgetCount;
- (void)setFakeWidgetCount:(unsigned long long)arg1;
- (void)setLiveWidgetCount:(unsigned long long)arg1;
- (void)setStaticWidgetCount:(unsigned long long)arg1;
- (unsigned long long)staticWidgetCount;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
