
@interface SBIconProfileModelMemoryStore : NSObject <SBIconModelStore> {
    NSDictionary * _currentState;
    NSDictionary * _desiredState;
}

@property (nonatomic, copy) NSDictionary *currentState;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSDictionary *desiredState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)currentState;
- (bool)deleteCurrentIconStateWithOptions:(unsigned long long)arg1 error:(id*)arg2;
- (bool)deleteDesiredIconStateWithOptions:(unsigned long long)arg1 error:(id*)arg2;
- (id)desiredState;
- (id)init;
- (id)initWithCurrentState:(id)arg1 desiredState:(id)arg2;
- (id)initWithITunesRepresentation:(id)arg1;
- (id)loadCurrentIconState:(id*)arg1;
- (id)loadDesiredIconState:(id*)arg1;
- (bool)saveCurrentIconState:(id)arg1 error:(id*)arg2;
- (bool)saveDesiredIconState:(id)arg1 error:(id*)arg2;
- (void)setCurrentState:(id)arg1;
- (void)setDesiredState:(id)arg1;

@end
