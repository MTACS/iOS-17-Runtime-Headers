
@interface CDMTokenizationProtoRequestCommand : CDMBaseCommand {
    NSArray * _requests;
}

@property (nonatomic, retain) NSArray *requests;

- (void).cxx_destruct;
- (id)initWithRequest:(id)arg1;
- (id)initWithRequests:(id)arg1;
- (id)requests;
- (void)setRequests:(id)arg1;

@end
