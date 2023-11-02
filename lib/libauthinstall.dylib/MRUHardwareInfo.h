
@interface MRUHardwareInfo : NSObject <NSCoding> {
    unsigned int  _boardID;
    unsigned int  _chipID;
    unsigned int  _chipRev;
    unsigned long long  _ecid;
    bool  _productionStatus;
    unsigned int  _securityDomain;
    unsigned int  _securityEpoch;
    bool  _securityMode;
}

@property (readonly) NSDictionary *asDictionary;
@property (readonly) unsigned int boardID;
@property (readonly) unsigned int chipID;
@property (readonly) unsigned int chipRev;
@property (readonly) unsigned long long ecid;
@property (readonly) bool productionStatus;
@property (readonly) unsigned int securityDomain;
@property (readonly) unsigned int securityEpoch;
@property (readonly) bool securityMode;

- (id)asDictionary;
- (unsigned int)boardID;
- (unsigned int)chipID;
- (unsigned int)chipRev;
- (id)description;
- (unsigned long long)ecid;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithChipID:(unsigned int)arg1 chipRev:(unsigned int)arg2 boardID:(unsigned int)arg3 securityEpoch:(unsigned int)arg4 productionStatus:(bool)arg5 securityMode:(bool)arg6 securityDomain:(unsigned int)arg7 ecid:(unsigned long long)arg8;
- (id)initWithCoder:(id)arg1;
- (id)initWithOptions:(id)arg1 error:(id*)arg2;
- (bool)productionStatus;
- (unsigned int)securityDomain;
- (unsigned int)securityEpoch;
- (bool)securityMode;

@end
