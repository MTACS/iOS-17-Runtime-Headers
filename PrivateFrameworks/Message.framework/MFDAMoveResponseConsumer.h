
@interface MFDAMoveResponseConsumer : MFDAMailAccountConsumer <DAMessageMoveRequestConsumer> {
    NSMutableDictionary * _destinationRemoteIDsBySourceRemoteIDs;
    MFError * _error;
    NSMutableSet * _failures;
    NSSet * _sourceRemoteIDs;
    long long  _statusCode;
}

@property (nonatomic, retain) MFError *error;
@property (nonatomic, readonly) long long statusCode;

- (void).cxx_destruct;
- (id)error;
- (id)initWithSourceRemoteIDs:(id)arg1 destinationRemoteIDsBySourceRemoteIDs:(id)arg2 failures:(id)arg3;
- (void)resultsForMessageMove:(id)arg1;
- (void)setError:(id)arg1;
- (long long)statusCode;
- (void)taskFailed:(id)arg1 statusCode:(long long)arg2 error:(id)arg3;

@end
