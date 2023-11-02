
@interface SFProxyText : NSObject <NSSecureCoding> {
    unsigned int  _slotIdentifier;
    double  _slotTextHeight;
    NSString * _text;
}

@property (nonatomic, readonly) unsigned int slotIdentifier;
@property (nonatomic, readonly) double slotTextHeight;
@property (nonatomic, readonly, copy) NSString *text;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithSlotIdentifier:(unsigned int)arg1;
- (id)initWithSlotIdentifier:(unsigned int)arg1 slotTextHeight:(double)arg2;
- (id)initWithText:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned int)slotIdentifier;
- (double)slotTextHeight;
- (id)text;

@end
