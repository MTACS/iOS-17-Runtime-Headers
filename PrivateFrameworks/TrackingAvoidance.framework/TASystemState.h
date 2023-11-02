
@interface TASystemState : NSObject <OSLogCoding, TAEventProtocol> {
    NSDate * _date;
    bool  _isOn;
    unsigned long long  _systemStateType;
}

@property (nonatomic, readonly, copy) NSDate *date;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isOn;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long systemStateType;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)date;
- (id)description;
- (id)descriptionDictionary;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithOSLogCoder:(id)arg1 options:(unsigned long long)arg2 maxLength:(unsigned long long)arg3;
- (id)getDate;
- (unsigned long long)getEventSubtype;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithSystemStateType:(unsigned long long)arg1 isOn:(bool)arg2 date:(id)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isOn;
- (unsigned long long)systemStateType;

@end
