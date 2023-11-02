
@interface _GCGamepadEventKeyboardEventAdapterConfig : NSObject <NSSecureCoding> {
    struct UsagePage_Usage_Pair { 
        long long usagePage; 
        long long usage; 
    }  _mappings;
}

+ (bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (long long)gamepadElementForUsagePage:(long long)arg1 usage:(long long)arg2;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)mapUsagePage:(long long)arg1 usage:(long long)arg2 toGamepadElement:(long long)arg3;

@end
