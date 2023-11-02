
@interface PHCloudIdentifierMapping : NSObject {
    PHCloudIdentifier * _cloudIdentifier;
    NSError * _error;
}

@property (nonatomic, readonly) PHCloudIdentifier *cloudIdentifier;
@property (nonatomic, readonly) NSError *error;

- (void).cxx_destruct;
- (id)cloudIdentifier;
- (id)error;
- (id)initWithCloudIdentifier:(id)arg1 error:(id)arg2;

@end
