
@interface PKCloudStoreUploadItemConfiguration : NSObject <NSSecureCoding> {
    NSSet * _cloudStoreZones;
    unsigned long long  _codingType;
    bool  _detectConflicts;
    NSObject<PKCloudStoreCoding> * _item;
    unsigned long long  _itemType;
    NSDictionary * _recordSpecificKeys;
    bool  _returnRecords;
}

@property (nonatomic, retain) NSSet *cloudStoreZones;
@property (nonatomic) unsigned long long codingType;
@property (nonatomic) bool detectConflicts;
@property (nonatomic, retain) NSObject<PKCloudStoreCoding> *item;
@property (nonatomic, copy) NSDictionary *recordSpecificKeys;
@property (nonatomic) bool returnRecords;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)cloudStoreZones;
- (unsigned long long)codingType;
- (id)description;
- (bool)detectConflicts;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithItem:(id)arg1;
- (id)initWithItem:(id)arg1 recordSpecificKeys:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToConfiguration:(id)arg1;
- (id)item;
- (id)recordSpecificKeys;
- (bool)returnRecords;
- (void)setCloudStoreZones:(id)arg1;
- (void)setCodingType:(unsigned long long)arg1;
- (void)setDetectConflicts:(bool)arg1;
- (void)setItem:(id)arg1;
- (void)setRecordSpecificKeys:(id)arg1;
- (void)setReturnRecords:(bool)arg1;

@end
