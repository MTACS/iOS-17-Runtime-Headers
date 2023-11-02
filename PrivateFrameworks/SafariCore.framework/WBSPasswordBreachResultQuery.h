
@interface WBSPasswordBreachResultQuery : NSObject {
    NSDate * _dateLastModified;
    NSData * _persistentIdentifier;
}

@property (nonatomic, readonly) NSDate *dateLastModified;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic, readonly) NSData *persistentIdentifier;

+ (id)dictionaryRepresentationsForResultQueries:(id)arg1;
+ (id)resultQueriesFromDictionaryRepresentations:(id)arg1;

- (void).cxx_destruct;
- (id)dateLastModified;
- (id)description;
- (id)dictionaryRepresentation;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)initWithPersistentIdentifier:(id)arg1 dateLastModified:(id)arg2;
- (id)persistentIdentifier;

@end
