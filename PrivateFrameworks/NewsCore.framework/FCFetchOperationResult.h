
@interface FCFetchOperationResult : NSObject {
    NSError * _error;
    unsigned long long  _fetchResult;
    id  _fetchedObject;
    NSSet * _missingObjectDescriptions;
    unsigned long long  _status;
}

@property (nonatomic, readonly) bool anyMissingObjects;
@property (nonatomic, readonly) NSError *error;
@property (nonatomic, readonly) unsigned long long fetchResult;
@property (nonatomic, readonly) id fetchedObject;
@property (nonatomic, copy) NSSet *missingObjectDescriptions;
@property (nonatomic, readonly) unsigned long long status;

+ (id)resultWithStatus:(unsigned long long)arg1 fetchedObject:(id)arg2 error:(id)arg3;

- (void).cxx_destruct;
- (bool)anyMissingObjects;
- (id)error;
- (unsigned long long)fetchResult;
- (id)fetchedObject;
- (id)initWithStatus:(unsigned long long)arg1 fetchedObject:(id)arg2 fetchResult:(unsigned long long)arg3 error:(id)arg4;
- (id)missingObjectDescriptions;
- (void)setMissingObjectDescriptions:(id)arg1;
- (unsigned long long)status;

@end
