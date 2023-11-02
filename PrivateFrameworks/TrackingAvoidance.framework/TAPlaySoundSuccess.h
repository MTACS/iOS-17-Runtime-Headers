
@interface TAPlaySoundSuccess : NSObject <TAEventProtocol> {
    NSData * _address;
    NSDate * _date;
    unsigned long long  _successType;
    NSUUID * _uuid;
}

@property (nonatomic, readonly) NSData *address;
@property (nonatomic, readonly) NSDate *date;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long successType;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSUUID *uuid;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)address;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)date;
- (id)description;
- (id)descriptionDictionary;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithOSLogCoder:(id)arg1 options:(unsigned long long)arg2 maxLength:(unsigned long long)arg3;
- (id)getDate;
- (id)initWithCoder:(id)arg1;
- (id)initWithUUID:(id)arg1 address:(id)arg2 successType:(unsigned long long)arg3 date:(id)arg4;
- (bool)isEqual:(id)arg1;
- (unsigned long long)successType;
- (id)uuid;

@end
