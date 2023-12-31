
@interface STShowDraftMessageRequest : AFSiriRequest {
    NSURL * _draftMessageIdentifier;
}

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithDraftMessageIdentifier:(id)arg1;
- (id)createResponse;
- (id)createUsageResult;
- (id)description;
- (id)draftMessageIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)message;

@end
