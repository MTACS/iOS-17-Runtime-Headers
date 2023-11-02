
@protocol WBSTranslateToJSValue <NSObject>

@required

- (struct OpaqueJSValue { }*)translateToJSValueWithJSContext:(struct OpaqueJSContext { }*)arg1;

@end
