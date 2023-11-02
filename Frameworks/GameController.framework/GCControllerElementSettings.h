
@interface GCControllerElementSettings : NSObject <NSSecureCoding> {
    id /* block */  _changedHandler;
    bool  _invertHorizontally;
    bool  _invertVertically;
    NSString * _mappingKey;
    bool  _swapAxes;
}

@property (nonatomic, copy) id /* block */ changedHandler;
@property (getter=isCustomized, nonatomic, readonly) bool customized;
@property (nonatomic) bool invertHorizontally;
@property (nonatomic) bool invertVertically;
@property (nonatomic, readonly) NSString *mappingKey;
@property (nonatomic) bool swapAxes;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id /* block */)changedHandler;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithElementKey:(id)arg1;
- (bool)invertHorizontally;
- (bool)invertVertically;
- (bool)isCustomized;
- (id)mappingKey;
- (void)setChangedHandler:(id /* block */)arg1;
- (void)setDefaultValues;
- (void)setDictionaryRepresentation:(id)arg1;
- (void)setDictionaryRepresentation:(id)arg1 fromCoder:(bool)arg2;
- (void)setInvertHorizontally:(bool)arg1;
- (void)setInvertVertically:(bool)arg1;
- (void)setSwapAxes:(bool)arg1;
- (bool)swapAxes;

@end
