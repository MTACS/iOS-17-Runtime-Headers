
@interface IMFeatureFlagsTestSwizzler : NSObject {
    bool  _enabled;
    SEL  _feature;
    IMSwizzledMethod * _originalMethod;
    IMSwizzledMethod * _replacementMethod;
    SEL  _testMethod;
}

@property (getter=isEnabled, nonatomic, readonly) bool enabled;
@property (nonatomic, readonly) SEL feature;
@property (nonatomic, readonly) IMSwizzledMethod *originalMethod;
@property (nonatomic, readonly) IMSwizzledMethod *replacementMethod;
@property (getter=isSwizzled, nonatomic, readonly) bool swizzled;
@property (nonatomic, readonly) SEL testMethod;

- (void).cxx_destruct;
- (void)dealloc;
- (SEL)feature;
- (id)initWithFeature:(SEL)arg1 enabled:(bool)arg2;
- (bool)isEnabled;
- (bool)isSwizzled;
- (id)originalMethod;
- (id)replacementMethod;
- (void)swizzle;
- (SEL)testMethod;
- (void)unswizzle;

@end
