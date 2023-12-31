
@interface CATTaskMessageStart : CATTaskMessage {
    CATTaskRequest * _request;
}

@property (nonatomic, retain) CATTaskRequest *request;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTaskUUID:(id)arg1 request:(id)arg2;
- (id)request;
- (void)setRequest:(id)arg1;

@end
