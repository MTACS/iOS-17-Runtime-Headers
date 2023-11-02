
@interface UIAccessibilityBridgeAXActionMessage : NSObject <NSSecureCoding> {
    int  _axAction;
    NSData * _elementRefData;
    id  _value;
}

@property (nonatomic) int axAction;
@property (nonatomic, retain) NSData *elementRefData;
@property (nonatomic, retain) id value;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (int)axAction;
- (id)elementRefData;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithAxAction:(int)arg1 withValue:(id)arg2 forElementRefData:(id)arg3;
- (id)initWithCoder:(id)arg1;
- (void)setAxAction:(int)arg1;
- (void)setElementRefData:(id)arg1;
- (void)setValue:(id)arg1;
- (id)value;

@end
