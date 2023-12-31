
@interface IDSCKFetchRecordZoneChangesOptions : NSObject <NSCopying, NSSecureCoding> {
    NSArray * _desiredKeys;
    IDSCKServerChangeToken * _previousServerChangeToken;
    unsigned long long  _resultsLimit;
}

@property (nonatomic, copy) NSArray *desiredKeys;
@property (nonatomic, copy) IDSCKServerChangeToken *previousServerChangeToken;
@property (nonatomic) unsigned long long resultsLimit;

+ (Class)__class;
+ (id)alloc;

- (void).cxx_destruct;
- (id)desiredKeys;
- (id)previousServerChangeToken;
- (unsigned long long)resultsLimit;
- (void)setDesiredKeys:(id)arg1;
- (void)setPreviousServerChangeToken:(id)arg1;
- (void)setResultsLimit:(unsigned long long)arg1;

@end
