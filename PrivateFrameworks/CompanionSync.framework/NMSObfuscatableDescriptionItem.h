
@interface NMSObfuscatableDescriptionItem : NSObject {
    bool  _obfuscated;
    NSString * _prefix;
    <NSObject> * _value;
}

@property (nonatomic) bool obfuscated;
@property (nonatomic, retain) NSString *prefix;
@property (nonatomic, retain) <NSObject> *value;

- (void).cxx_destruct;
- (id)initWithPrefix:(id)arg1 value:(id)arg2 obfuscated:(bool)arg3;
- (bool)obfuscated;
- (id)prefix;
- (void)setObfuscated:(bool)arg1;
- (void)setPrefix:(id)arg1;
- (void)setValue:(id)arg1;
- (id)value;

@end
