
@interface UIObject : NSObject {
    UIObjectCompat * _underlyingObject;
}

@property (readonly) UIObjectCompat *underlyingObject;

- (void).cxx_destruct;
- (id)init:(long long)arg1 confidence:(double)arg2 text:(id)arg3 boundingBox:(id)arg4 children:(id)arg5 clickable:(bool)arg6;
- (id)underlyingObject;

@end
