
@interface HAPCharacteristicValueRange : NSObject <HAPTLVProtocol, NSCopying> {
    NSData * _lowerBound;
    NSData * _upperBound;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSData *lowerBound;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSData *upperBound;

+ (id)parsedFromData:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)init;
- (id)initWithLowerBound:(id)arg1 upperBound:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)lowerBound;
- (bool)parseFromData:(id)arg1 error:(id*)arg2;
- (id)serializeWithError:(id*)arg1;
- (void)setLowerBound:(id)arg1;
- (void)setUpperBound:(id)arg1;
- (id)upperBound;

@end
