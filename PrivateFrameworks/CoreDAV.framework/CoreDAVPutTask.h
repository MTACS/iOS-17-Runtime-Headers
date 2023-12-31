
@interface CoreDAVPutTask : CoreDAVPostOrPutTask {
    NSString * _nextETag;
}

@property (nonatomic) <CoreDAVTaskDelegate> *delegate;
@property (nonatomic, retain) NSString *nextETag;

- (void).cxx_destruct;
- (id)description;
- (void)finishCoreDAVTaskWithError:(id)arg1;
- (id)httpMethod;
- (id)nextETag;
- (void)setNextETag:(id)arg1;

@end
