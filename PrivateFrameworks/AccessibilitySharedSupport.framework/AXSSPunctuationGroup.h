
@interface AXSSPunctuationGroup : NSObject {
    NSSet * _autoSwitchContexts;
    NSUUID * _basePunctuationUUID;
    NSString * _ckChangeTag;
    NSDate * _ckRecordProcessDate;
    NSArray * _entries;
    bool  _inCloud;
    bool  _inDatabase;
    NSDate * _lastModifiedDate;
    NSString * _name;
    NSUUID * _uuid;
    unsigned short  _version;
}

@property (nonatomic, retain) NSSet *autoSwitchContexts;
@property (nonatomic, retain) NSUUID *basePunctuationUUID;
@property (nonatomic, retain) NSString *ckChangeTag;
@property (nonatomic, retain) NSDate *ckRecordProcessDate;
@property (nonatomic, retain) NSArray *entries;
@property (nonatomic) bool inCloud;
@property (nonatomic) bool inDatabase;
@property (nonatomic, readonly) bool isSystemPunctuationGroup;
@property (nonatomic, readonly) NSDictionary *jsonDictionary;
@property (nonatomic, readonly) NSData *jsonRepresentation;
@property (nonatomic, retain) NSDate *lastModifiedDate;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) NSUUID *uuid;
@property (nonatomic) unsigned short version;

+ (id)punctuationGroupFromJSONRepresentation:(id)arg1;

- (void).cxx_destruct;
- (id)autoSwitchContexts;
- (id)basePunctuationUUID;
- (id)ckChangeTag;
- (id)ckRecordProcessDate;
- (id)description;
- (id)entries;
- (bool)inCloud;
- (bool)inDatabase;
- (id)init;
- (bool)isEqual:(id)arg1;
- (bool)isSystemPunctuationGroup;
- (id)jsonDictionary;
- (id)jsonRepresentation;
- (id)lastModifiedDate;
- (id)name;
- (void)setAutoSwitchContexts:(id)arg1;
- (void)setBasePunctuationUUID:(id)arg1;
- (void)setCkChangeTag:(id)arg1;
- (void)setCkRecordProcessDate:(id)arg1;
- (void)setEntries:(id)arg1;
- (void)setInCloud:(bool)arg1;
- (void)setInDatabase:(bool)arg1;
- (void)setLastModifiedDate:(id)arg1;
- (void)setName:(id)arg1;
- (void)setUuid:(id)arg1;
- (void)setVersion:(unsigned short)arg1;
- (id)uuid;
- (unsigned short)version;

@end
