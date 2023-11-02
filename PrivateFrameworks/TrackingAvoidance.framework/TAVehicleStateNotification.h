
@interface TAVehicleStateNotification : NSObject <OSLogCoding, TAEventProtocol> {
    NSDate * _date;
    unsigned long long  _operatorState;
    unsigned long long  _vehicularHints;
    unsigned long long  _vehicularState;
}

@property (nonatomic, readonly, copy) NSDate *date;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long operatorState;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long vehicularHints;
@property (nonatomic, readonly) unsigned long long vehicularState;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)date;
- (id)description;
- (id)descriptionDictionary;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithOSLogCoder:(id)arg1 options:(unsigned long long)arg2 maxLength:(unsigned long long)arg3;
- (id)getDate;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithVehicularState:(unsigned long long)arg1 andVehicularHints:(unsigned long long)arg2 andOperatorState:(unsigned long long)arg3 date:(id)arg4;
- (bool)isEqual:(id)arg1;
- (unsigned long long)operatorState;
- (unsigned long long)vehicularHints;
- (unsigned long long)vehicularState;

@end
