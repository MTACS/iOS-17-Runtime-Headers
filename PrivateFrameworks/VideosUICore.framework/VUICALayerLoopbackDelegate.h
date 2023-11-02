
@interface VUICALayerLoopbackDelegate : NSObject <CALayerDelegate> {
    UIView * _view;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) UIView *view;

- (void).cxx_destruct;
- (id)actionForLayer:(id)arg1 forKey:(id)arg2;
- (id)init:(id)arg1;
- (void)setView:(id)arg1;
- (id)view;

@end
