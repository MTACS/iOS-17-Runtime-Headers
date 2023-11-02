
@interface HAPSupportedCharacteristicValueTransitionConfiguration : NSObject <HAPTLVProtocol, NSCopying> {
    NSMutableArray * _transitions;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSMutableArray *transitions;

+ (id)parsedFromData:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)init;
- (id)initWithTransitions:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)parseFromData:(id)arg1 error:(id*)arg2;
- (id)serializeWithError:(id*)arg1;
- (void)setTransitions:(id)arg1;
- (id)transitions;

@end
