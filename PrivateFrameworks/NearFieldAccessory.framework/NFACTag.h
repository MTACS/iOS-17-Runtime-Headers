
@interface NFACTag : NSObject <NFACTag, NSSecureCoding> {
    NSArray * _allSystemCodes;
    NSData * _appData;
    NSData * _atqa;
    NSString * _description;
    NSData * _historicalBytes;
    unsigned int  _ndefAvailability;
    unsigned long long  _ndefContainerSize;
    unsigned long long  _ndefMessageSize;
    NSData * _pmm;
    NSData * _sak;
    unsigned char  _silentType;
    NSData * _tagID;
    unsigned int  _technology;
    unsigned int  _type;
    NSData * _uid;
}

@property (nonatomic, readonly, copy) NSData *UID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isSilent;
@property (nonatomic, readonly) unsigned int ndefAvailability;
@property (nonatomic, readonly) unsigned long long ndefContainerSize;
@property (nonatomic, readonly) unsigned long long ndefMessageSize;
@property (nonatomic, readonly) unsigned char silentType;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSData *tagID;
@property (nonatomic, readonly) unsigned int technology;
@property (nonatomic, readonly) unsigned int type;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)IDm;
- (id)PMm;
- (id)SystemCode;
- (id)UID;
- (id)allSystemCodes;
- (id)applicationData;
- (bool)applicationDataCoding;
- (id)asDictionary;
- (id)atqa;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)historicalBytes;
- (id)initWithCoder:(id)arg1;
- (id)initWithInternalTag:(id)arg1;
- (bool)isSilent;
- (unsigned int)ndefAvailability;
- (unsigned long long)ndefContainerSize;
- (unsigned long long)ndefMessageSize;
- (id)pupi;
- (id)sak;
- (id)selectedAID;
- (unsigned char)silentType;
- (id)tagID;
- (unsigned int)technology;
- (unsigned int)type;

@end
