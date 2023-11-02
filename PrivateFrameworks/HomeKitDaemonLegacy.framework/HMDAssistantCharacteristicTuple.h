
@interface HMDAssistantCharacteristicTuple : NSObject {
    NSString * _attribute;
    SAHAAttributeValue * _value;
}

@property (nonatomic, readonly) NSString *attribute;
@property (nonatomic, readonly) SAHAAttributeValue *value;

- (void).cxx_destruct;
- (id)attribute;
- (id)init;
- (id)initWithAttribute:(id)arg1 value:(id)arg2;
- (id)value;

@end
