
@interface PHLocalIdentifierMapping : NSObject {
    NSError * _error;
    NSString * _localIdentifier;
}

@property (nonatomic, readonly) NSError *error;
@property (nonatomic, readonly) NSString *localIdentifier;

- (void).cxx_destruct;
- (id)error;
- (id)initWithLocalIdentifier:(id)arg1 error:(id)arg2;
- (id)localIdentifier;

@end
