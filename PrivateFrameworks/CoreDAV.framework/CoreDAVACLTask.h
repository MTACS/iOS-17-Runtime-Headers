
@interface CoreDAVACLTask : CoreDAVTask {
    NSArray * _accessControlEntities;
}

@property (nonatomic, retain) NSArray *accessControlEntities;
@property (nonatomic) <CoreDAVACLTaskDelegate> *delegate;

- (void).cxx_destruct;
- (id)accessControlEntities;
- (id)description;
- (void)finishCoreDAVTaskWithError:(id)arg1;
- (id)httpMethod;
- (id)initWithAccessControlEntities:(id)arg1 atURL:(id)arg2;
- (id)initWithURL:(id)arg1;
- (id)requestBody;
- (void)setAccessControlEntities:(id)arg1;

@end
