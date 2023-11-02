
@interface AXSSPunctuationEntry : NSObject <NSCopying> {
    NSString * _ckChangeTag;
    NSDate * _ckRecordProcessDate;
    NSUUID * _groupUUID;
    bool  _inCloud;
    NSDate * _lastModifiedDate;
    NSString * _punctuation;
    NSString * _replacement;
    long long  _rule;
    NSUUID * _uuid;
    unsigned short  _version;
}

@property (nonatomic, retain) NSString *ckChangeTag;
@property (nonatomic, retain) NSDate *ckRecordProcessDate;
@property (nonatomic, retain) NSUUID *groupUUID;
@property (nonatomic) bool inCloud;
@property (nonatomic, readonly) NSDictionary *jsonDictionary;
@property (nonatomic, readonly) NSData *jsonRepresentation;
@property (nonatomic, retain) NSDate *lastModifiedDate;
@property (nonatomic, retain) NSString *punctuation;
@property (nonatomic, retain) NSString *replacement;
@property (nonatomic) long long rule;
@property (nonatomic, retain) NSUUID *uuid;
@property (nonatomic) unsigned short version;

+ (id)punctuationEntryFromJSONDictionary:(id)arg1;
+ (id)punctuationEntryFromJSONRepresentation:(id)arg1;

- (void).cxx_destruct;
- (id)ckChangeTag;
- (id)ckRecordProcessDate;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)groupUUID;
- (bool)inCloud;
- (id)init;
- (bool)isEqual:(id)arg1;
- (id)jsonDictionary;
- (id)jsonRepresentation;
- (id)lastModifiedDate;
- (id)punctuation;
- (id)replacement;
- (long long)rule;
- (void)setCkChangeTag:(id)arg1;
- (void)setCkRecordProcessDate:(id)arg1;
- (void)setGroupUUID:(id)arg1;
- (void)setInCloud:(bool)arg1;
- (void)setLastModifiedDate:(id)arg1;
- (void)setPunctuation:(id)arg1;
- (void)setReplacement:(id)arg1;
- (void)setRule:(long long)arg1;
- (void)setUuid:(id)arg1;
- (void)setVersion:(unsigned short)arg1;
- (id)uuid;
- (unsigned short)version;

@end
