
@interface TRAArbitrationAmbientPresentationInputs : NSObject <BSDescriptionProviding, NSCopying> {
    long long  _ambientDisplayStyle;
    bool  _ambientPresented;
}

@property (nonatomic, readonly) long long ambientDisplayStyle;
@property (getter=isAmbientPresented, nonatomic, readonly) bool ambientPresented;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (long long)ambientDisplayStyle;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)initWithAmbientPresented:(bool)arg1 ambientDisplayStyle:(long long)arg2;
- (bool)isAmbientPresented;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToAmbientPresentationInputs:(id)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
