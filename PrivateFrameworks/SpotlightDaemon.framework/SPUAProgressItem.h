
@interface SPUAProgressItem : NSObject {
    NSString * _bundleID;
    unsigned int  _completeCount;
    unsigned int  _deleteCount;
    unsigned int  _errorCount;
    unsigned int  _expectedCount;
    NSString * _relatedID;
    NSString * _uaID;
}

@property (nonatomic, retain) NSString *bundleID;
@property (nonatomic) unsigned int completeCount;
@property (nonatomic) unsigned int deleteCount;
@property (nonatomic) unsigned int errorCount;
@property (nonatomic) unsigned int expectedCount;
@property (nonatomic, retain) NSString *relatedID;
@property (nonatomic, retain) NSString *uaID;

+ (void)initialize;
+ (void)queueRelatedDelete:(id)arg1 forBundleID:(id)arg2;

- (void).cxx_destruct;
- (void)add;
- (id)bundleID;
- (unsigned int)completeCount;
- (unsigned int)deleteCount;
- (unsigned int)errorCount;
- (unsigned int)expectedCount;
- (unsigned long long)hash;
- (id)initWithBundleID:(id)arg1 uaID:(id)arg2 relatedID:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)relatedID;
- (void)setBundleID:(id)arg1;
- (void)setCompleteCount:(unsigned int)arg1;
- (void)setDeleteCount:(unsigned int)arg1;
- (void)setErrorCount:(unsigned int)arg1;
- (void)setExpectedCount:(unsigned int)arg1;
- (void)setRelatedID:(id)arg1;
- (void)setUaID:(id)arg1;
- (id)uaID;
- (void)update:(int)arg1;

@end
