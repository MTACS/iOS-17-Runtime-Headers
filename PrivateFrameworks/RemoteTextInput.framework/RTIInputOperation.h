
@interface RTIInputOperation : NSObject <NSSecureCoding, RTICustomDataProtocol> {
    SEL  _actionSelector;
    NSObject<NSSecureCoding> * _customInfo;
    NSString * _customInfoType;
    int  _inputModality;
    TIKeyboardInput * _keyboardInput;
}

@property (nonatomic) SEL actionSelector;
@property (nonatomic, retain) NSObject<NSSecureCoding> *customInfo;
@property (nonatomic, retain) NSString *customInfoType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) int inputModality;
@property (nonatomic, retain) TIKeyboardInput *keyboardInput;
@property (readonly) Class superclass;

+ (void)registerCustomInfoClasses:(id)arg1 forType:(id)arg2;
+ (bool)supportsSecureCoding;
+ (void)unregisterCustomInfoType:(id)arg1;

- (void).cxx_destruct;
- (SEL)actionSelector;
- (id)customInfo;
- (id)customInfoType;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (int)inputModality;
- (bool)isEqual:(id)arg1;
- (id)keyboardInput;
- (void)setActionSelector:(SEL)arg1;
- (void)setCustomInfo:(id)arg1;
- (void)setCustomInfoType:(id)arg1;
- (void)setInputModality:(int)arg1;
- (void)setKeyboardInput:(id)arg1;

@end
