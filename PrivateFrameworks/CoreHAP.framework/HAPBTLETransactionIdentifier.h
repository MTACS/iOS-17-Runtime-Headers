
@interface HAPBTLETransactionIdentifier : HMFObject {
    unsigned char  _unsignedCharValue;
}

@property (nonatomic, readonly) unsigned char unsignedCharValue;

+ (unsigned char)generateRequestIdentifier;
+ (id)randomTransactionIdentifier;

- (id)debugDescription;
- (id)description;
- (id)descriptionWithPointer:(bool)arg1;
- (unsigned long long)hash;
- (id)initWithUnsignedCharValue:(unsigned char)arg1;
- (bool)isEqual:(id)arg1;
- (id)shortDescription;
- (unsigned char)unsignedCharValue;

@end
