
@interface AAAbsintheSignerContextCache : NSObject {
    AAAbsintheContext * _context;
    NSDate * _creationDate;
}

@property (nonatomic, readonly) AAAbsintheContext *context;
@property (nonatomic, readonly) NSDate *creationDate;

+ (id)cacheWithContext:(id)arg1;

- (void).cxx_destruct;
- (id)context;
- (id)creationDate;
- (id)init;
- (id)initWithContext:(id)arg1;

@end
