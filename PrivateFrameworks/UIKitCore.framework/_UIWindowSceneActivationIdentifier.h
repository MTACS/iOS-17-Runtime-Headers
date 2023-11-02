
@interface _UIWindowSceneActivationIdentifier : NSObject <_UIContentEffectKey> {
    struct CGPoint { 
        double x; 
        double y; 
    }  _location;
    UIView * _view;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } location;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UIView *view;

+ (id)identifierWithLocation:(struct CGPoint { double x1; double x2; })arg1 inView:(id)arg2;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (struct CGPoint { double x1; double x2; })location;
- (id)view;

@end
