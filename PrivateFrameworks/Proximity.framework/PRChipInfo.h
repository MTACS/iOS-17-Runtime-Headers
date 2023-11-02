
@interface PRChipInfo : NSObject <NSCopying, NSSecureCoding> {
    unsigned long long  _ECID;
    unsigned short  _boardID;
    unsigned int  _bootMode;
    unsigned short  _chipID;
    unsigned short  _chipRevision;
    unsigned char  _prodMode;
    unsigned char  _secureMode;
    unsigned char  _securityDomain;
}

@property (nonatomic, readonly) unsigned long long ECID;
@property (nonatomic, readonly) unsigned short boardID;
@property (nonatomic, readonly) unsigned int bootMode;
@property (nonatomic, readonly) unsigned short chipID;
@property (nonatomic, readonly) unsigned short chipRevision;
@property (nonatomic, readonly) unsigned char prodMode;
@property (nonatomic, readonly) unsigned char secureMode;
@property (nonatomic, readonly) unsigned char securityDomain;

+ (bool)supportsSecureCoding;

- (unsigned long long)ECID;
- (unsigned short)boardID;
- (unsigned int)bootMode;
- (unsigned short)chipID;
- (unsigned short)chipRevision;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithECID:(unsigned long long)arg1 chipID:(unsigned short)arg2 boardID:(unsigned short)arg3 bootMode:(unsigned int)arg4 prodMode:(unsigned char)arg5 secureMode:(unsigned char)arg6 securityDomain:(unsigned char)arg7 chipRevision:(unsigned short)arg8;
- (bool)isEqual:(id)arg1;
- (unsigned char)prodMode;
- (unsigned char)secureMode;
- (unsigned char)securityDomain;

@end
