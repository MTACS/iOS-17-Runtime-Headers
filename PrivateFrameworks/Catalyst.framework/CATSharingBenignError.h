
@interface CATSharingBenignError : NSObject <CATSharingFailureEvent> {
    NSError * _underlyingError;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) long long failureType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSError *underlyingError;

- (void).cxx_destruct;
- (long long)failureType;
- (id)initWithUnderlyingError:(id)arg1;
- (id)underlyingError;

@end
