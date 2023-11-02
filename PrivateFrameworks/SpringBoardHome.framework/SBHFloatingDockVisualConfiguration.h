
@interface SBHFloatingDockVisualConfiguration : NSObject <BSDescriptionProviding, NSCopying> {
    struct CGSize { 
        double width; 
        double height; 
    }  _maximumEditingIconSize;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct CGSize { double x1; double x2; } maximumEditingIconSize;
@property (readonly) Class superclass;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (struct CGSize { double x1; double x2; })maximumEditingIconSize;
- (void)setMaximumEditingIconSize:(struct CGSize { double x1; double x2; })arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
