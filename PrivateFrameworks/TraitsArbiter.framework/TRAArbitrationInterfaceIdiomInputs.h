
@interface TRAArbitrationInterfaceIdiomInputs : NSObject <BSDescriptionProviding, NSCopying> {
    bool  _isPad;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isPad;
@property (readonly) Class superclass;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)initWithIsPad:(bool)arg1;
- (bool)isPad;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
