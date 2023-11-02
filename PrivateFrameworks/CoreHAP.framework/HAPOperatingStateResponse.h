
@interface HAPOperatingStateResponse : NSObject <HAPTLVProtocol, NSCopying> {
    HAPOperatingStateAbnormalReasonsWrapper * _abnormalReasons;
    HAPOperatingStateWrapper * _state;
}

@property (nonatomic, retain) HAPOperatingStateAbnormalReasonsWrapper *abnormalReasons;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HAPOperatingStateWrapper *state;
@property (readonly) Class superclass;

+ (id)parsedFromData:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (id)abnormalReasons;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)init;
- (id)initWithState:(id)arg1 abnormalReasons:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)parseFromData:(id)arg1 error:(id*)arg2;
- (id)serializeWithError:(id*)arg1;
- (void)setAbnormalReasons:(id)arg1;
- (void)setState:(id)arg1;
- (id)state;

@end
