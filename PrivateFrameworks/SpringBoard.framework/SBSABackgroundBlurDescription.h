
@interface SBSABackgroundBlurDescription : NSObject <NSCopying, SBSABackgroundBlurDescribing, SBSABlockMutating, SBSAInterfaceElementIdentifying> {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _blurFrame;
    bool  _blurHidden;
}

@property (setter=_setBlurFrame:, nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } blurFrame;
@property (getter=isBlurHidden, setter=_setBlurHidden:, nonatomic) bool blurHidden;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSUUID *interfaceElementIdentifier;
@property (readonly) Class superclass;

+ (id)instanceWithBlock:(id /* block */)arg1;
+ (Class)mutatorClass;

- (void)_setBlurFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_setBlurHidden:(bool)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })blurFrame;
- (id)copyBySettingBlurFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)copyBySettingBlurHidden:(bool)arg1;
- (id)copyWithBlock:(id /* block */)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)interfaceElementIdentifier;
- (bool)isBlurHidden;
- (bool)isEqual:(id)arg1;

@end
