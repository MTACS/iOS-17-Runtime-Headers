
@interface TAAISFetchSuccess : NSObject <TAEventProtocol> {
    NSDate * _date;
    TAAccessoryInformation * _info;
    unsigned long long  _successType;
    NSUUID * _uuid;
}

@property (nonatomic, readonly, copy) NSDate *date;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) TAAccessoryInformation *info;
@property (nonatomic, readonly) unsigned long long successType;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSUUID *uuid;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)date;
- (id)description;
- (id)descriptionDictionary;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithOSLogCoder:(id)arg1 options:(unsigned long long)arg2 maxLength:(unsigned long long)arg3;
- (id)getDate;
- (id)info;
- (id)initWithCoder:(id)arg1;
- (id)initWithUUID:(id)arg1 withAISInfo:(id)arg2 successType:(unsigned long long)arg3 date:(id)arg4;
- (bool)isEqual:(id)arg1;
- (unsigned long long)successType;
- (id)uuid;

@end
