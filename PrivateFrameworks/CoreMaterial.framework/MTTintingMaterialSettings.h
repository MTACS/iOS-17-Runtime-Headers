
@interface MTTintingMaterialSettings : NSObject <MTTinting> {
    double  _tintAlpha;
    struct CGColor { } * _tintColor;
    NSDictionary * _tintColorDescription;
    NSString * _tintColorName;
    long long  _tintColorUIStyle;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) double tintAlpha;
@property (nonatomic, readonly) struct CGColor { }*tintColor;
@property (nonatomic, readonly, copy) NSDictionary *tintColorDescription;
@property (nonatomic, readonly, copy) NSString *tintColorName;
@property (nonatomic, readonly) long long tintColorUIStyle;

- (void).cxx_destruct;
- (void)_processTintingDescription:(id)arg1 defaultingToIdentity:(bool)arg2;
- (void)dealloc;
- (id)initWithTintingDescription:(id)arg1 andDescendantDescriptions:(id)arg2;
- (double)tintAlpha;
- (struct CGColor { }*)tintColor;
- (id)tintColorDescription;
- (id)tintColorName;
- (long long)tintColorUIStyle;

@end
