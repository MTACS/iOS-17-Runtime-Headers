
@interface WBSSavedAccountSidecarContextSpecificData : NSObject {
    NSDate * _lastUsedDate;
    NSDictionary * _originalKeychainDictionary;
}

@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic, copy) NSDate *lastUsedDate;

- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)initWithLastUsedDate:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)lastUsedDate;
- (void)setLastUsedDate:(id)arg1;

@end
