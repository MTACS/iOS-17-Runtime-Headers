
@interface QOSConfig : NSObject {
    QOSConfigInternal * _underlyingObject;
}

@property (readonly) QOSConfigInternal *underlyingObject;

- (void).cxx_destruct;
- (long long)appTarget;
- (id)initWithAppTarget:(long long)arg1 locale:(id)arg2;
- (id)locale;
- (id)underlyingObject;

@end
