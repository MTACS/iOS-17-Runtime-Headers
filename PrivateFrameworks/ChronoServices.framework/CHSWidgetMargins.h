
@interface CHSWidgetMargins : NSObject <BSXPCCoding, NSCopying, NSSecureCoding> {
    struct CHSEdgeInsets { 
        double top; 
        double leading; 
        double bottom; 
        double trailing; 
    }  _backgroundRemovedContentMargins;
    struct CHSEdgeInsets { 
        double top; 
        double leading; 
        double bottom; 
        double trailing; 
    }  _contentMargins;
    struct CHSEdgeInsets { 
        double top; 
        double leading; 
        double bottom; 
        double trailing; 
    }  _layoutInsets;
    struct CHSEdgeInsets { 
        double top; 
        double leading; 
        double bottom; 
        double trailing; 
    }  _safeAreaInsets;
}

@property (nonatomic, readonly) struct CHSEdgeInsets { double x1; double x2; double x3; double x4; } backgroundRemovedContentMargins;
@property (nonatomic, readonly) struct CHSEdgeInsets { double x1; double x2; double x3; double x4; } contentMargins;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) struct CHSEdgeInsets { double x1; double x2; double x3; double x4; } layoutInsets;
@property (nonatomic, readonly) struct CHSEdgeInsets { double x1; double x2; double x3; double x4; } safeAreaInsets;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (struct CHSEdgeInsets { double x1; double x2; double x3; double x4; })backgroundRemovedContentMargins;
- (long long)compare:(id)arg1;
- (struct CHSEdgeInsets { double x1; double x2; double x3; double x4; })contentMargins;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithSafeAreaInsets:(struct CHSEdgeInsets { double x1; double x2; double x3; double x4; })arg1 layoutInsets:(struct CHSEdgeInsets { double x1; double x2; double x3; double x4; })arg2 contentMargins:(struct CHSEdgeInsets { double x1; double x2; double x3; double x4; })arg3 backgroundRemovedContentMargins:(struct CHSEdgeInsets { double x1; double x2; double x3; double x4; })arg4;
- (id)initWithXPCDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (struct CHSEdgeInsets { double x1; double x2; double x3; double x4; })layoutInsets;
- (struct CHSEdgeInsets { double x1; double x2; double x3; double x4; })safeAreaInsets;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
