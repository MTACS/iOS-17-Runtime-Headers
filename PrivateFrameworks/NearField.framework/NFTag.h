
@interface NFTag : NSObject <NFTag, NFTagA, NFTagB, NFTagF, NSSecureCoding> {
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
    unsigned char  _sfgi;
    NSData * _tagID;
    unsigned int  _technology;
    unsigned int  _type;
    NSData * _uid;
}

@property (nonatomic, readonly, copy) NSData *AppData;
@property (nonatomic, readonly, copy) NSData *IDm;
@property (nonatomic, readonly, copy) NSData *PMm;
@property (nonatomic, readonly, copy) NSData *SystemCode;
@property (nonatomic, readonly, copy) NSData *UID;
@property (nonatomic, readonly, copy) NSArray *allSystemCodes;
@property (nonatomic, readonly, copy) NSData *applicationData;
@property (nonatomic, readonly) bool applicationDataCoding;
@property (nonatomic, readonly, copy) NSData *atqa;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSData *historicalBytes;
@property (nonatomic, readonly) unsigned int ndefAvailability;
@property (nonatomic, readonly) unsigned long long ndefContainerSize;
@property (nonatomic, readonly) unsigned long long ndefMessageSize;
@property (nonatomic, readonly, copy) NSData *pupi;
@property (nonatomic, readonly, copy) NSData *sak;
@property (nonatomic, readonly, copy) NSData *selectedAID;
@property (nonatomic, readonly) unsigned char sfgi;
@property (nonatomic, readonly) double sfgt;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <NFTagA> *tagA;
@property (nonatomic, readonly) <NFTagB> *tagB;
@property (nonatomic, readonly) <NFTagF> *tagF;
@property (nonatomic, readonly, copy) NSData *tagID;
@property (nonatomic, readonly) unsigned int technology;
@property (nonatomic, readonly) unsigned int type;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)AppData;
- (id)IDm;
- (id)PMm;
- (id)SystemCode;
- (id)UID;
- (id)allSystemCodes;
- (id)applicationData;
- (bool)applicationDataCoding;
- (id)atqa;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)historicalBytes;
- (id)initWithCoder:(id)arg1;
- (id)initWithNFTag:(id)arg1;
- (bool)isEqualToNFTag:(id)arg1;
- (unsigned int)ndefAvailability;
- (unsigned long long)ndefContainerSize;
- (unsigned long long)ndefMessageSize;
- (id)pupi;
- (id)sak;
- (id)selectedAID;
- (unsigned char)sfgi;
- (double)sfgt;
- (id)tagA;
- (id)tagB;
- (id)tagF;
- (id)tagID;
- (unsigned int)technology;
- (unsigned int)type;

@end
