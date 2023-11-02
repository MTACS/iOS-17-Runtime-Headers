
@interface _UIKeyboardSuppressionPencilPolicyDelegate : NSObject <_UIKeyboardSuppressionPolicyDelegate> {
    bool  _isQueryingLocaleIdentifier;
    NSString * _overrideLocaleIdentifier;
    bool  _suppressLocaleIdentifier;
}

@property (nonatomic, copy) NSString *_overrideLocaleIdentifier;
@property (nonatomic) bool _suppressLocaleIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_overrideLocaleIdentifier;
- (id)_recognitionLocaleIdentifier;
- (bool)_shouldSuppressForDelegate:(id)arg1;
- (bool)_suppressLocaleIdentifier;
- (void)set_overrideLocaleIdentifier:(id)arg1;
- (void)set_suppressLocaleIdentifier:(bool)arg1;

@end
