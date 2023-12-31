
@interface CoreDAVDeleteTask : CoreDAVActionBackedTask {
    NSString * _previousETag;
}

@property (nonatomic) <CoreDAVTaskDelegate> *delegate;
@property (nonatomic, retain) NSString *previousETag;

- (void).cxx_destruct;
- (id)additionalHeaderValues;
- (id)description;
- (void)finishCoreDAVTaskWithError:(id)arg1;
- (id)httpMethod;
- (id)previousETag;
- (id)requestBody;
- (void)setPreviousETag:(id)arg1;

@end
