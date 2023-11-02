
@interface UIDraggingBeginningSessionConfiguration : UIDraggingSessionConfiguration {
    long long  _dataOwner;
    struct CAPoint3D { 
        double x; 
        double y; 
        double z; 
    }  _initialCentroidInSourceWindow;
    NSArray * _items;
    UIView * _sourceView;
}

@property (nonatomic, readonly) long long dataOwner;
@property (nonatomic) struct CAPoint3D { double x1; double x2; double x3; } initialCentroidInSourceWindow;
@property (nonatomic, readonly) NSArray *items;
@property (nonatomic, readonly) UIView *sourceView;

+ (id)configurationWithItems:(id)arg1 dataOwner:(long long)arg2 initialCentroidInSourceWindow:(struct CAPoint3D { double x1; double x2; double x3; })arg3 requiredContextIds:(id)arg4 sourceView:(id)arg5 accessibilityEndpoint:(id)arg6;
+ (id)configurationWithItems:(id)arg1 dataOwner:(long long)arg2 pointerTouch:(id)arg3 requiredContextIds:(id)arg4 sourceView:(id)arg5;
+ (id)configurationWithItems:(id)arg1 dataOwner:(long long)arg2 touches:(id)arg3 requiredContextIds:(id)arg4 sourceView:(id)arg5;

- (void).cxx_destruct;
- (long long)dataOwner;
- (id)initWithItems:(id)arg1 dataOwner:(long long)arg2 requiredContextIds:(id)arg3 sourceView:(id)arg4;
- (struct CAPoint3D { double x1; double x2; double x3; })initialCentroidInSourceWindow;
- (id)items;
- (void)setInitialCentroidInSourceWindow:(struct CAPoint3D { double x1; double x2; double x3; })arg1;
- (id)sourceView;

@end
