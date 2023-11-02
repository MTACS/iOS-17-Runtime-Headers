
@interface STRestrictionItem : NSObject <NSCopying> {
    id  _otherInfo;
    NSString * _payloadKey;
    unsigned long long  _restrictionType;
    NSString * _rmConfiguration;
    NSString * _uiLabel;
}

@property (nonatomic, readonly, copy) id otherInfo;
@property (nonatomic, readonly, copy) NSString *payloadKey;
@property (nonatomic, readonly) unsigned long long restrictionType;
@property (nonatomic, readonly, copy) NSString *rmConfiguration;
@property (nonatomic, readonly, copy) NSString *uiLabel;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)initWithConfiguration:(id)arg1 restrictionKey:(id)arg2 labelName:(id)arg3 type:(unsigned long long)arg4 restrictionValue:(id)arg5;
- (bool)isEqual:(id)arg1;
- (id)otherInfo;
- (id)payloadKey;
- (unsigned long long)restrictionType;
- (id)rmConfiguration;
- (id)uiLabel;

@end
