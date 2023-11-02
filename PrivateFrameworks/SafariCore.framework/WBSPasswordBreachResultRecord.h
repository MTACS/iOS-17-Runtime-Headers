
@interface WBSPasswordBreachResultRecord : NSObject {
    NSDate * _dateLastModified;
    NSData * _persistentIdentifier;
    unsigned long long  _result;
}

@property (nonatomic, readonly) NSDate *dateLastModified;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic, readonly) NSData *persistentIdentifier;
@property (nonatomic, readonly) unsigned long long result;

+ (id)dictionaryRepresentationsForResultRecords:(id)arg1;
+ (id)resultRecordsFromDictionaryRepresentations:(id)arg1;

- (void).cxx_destruct;
- (id)dateLastModified;
- (id)description;
- (id)dictionaryRepresentation;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)initWithPersistentIdentifier:(id)arg1 result:(unsigned long long)arg2 dateLastModified:(id)arg3;
- (id)persistentIdentifier;
- (unsigned long long)result;

@end
