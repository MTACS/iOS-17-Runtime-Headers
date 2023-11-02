
@protocol SBIconModelStore <NSObject>

@required

- (bool)deleteCurrentIconStateWithOptions:(unsigned long long)arg1 error:(id*)arg2;
- (bool)deleteDesiredIconStateWithOptions:(unsigned long long)arg1 error:(id*)arg2;
- (NSDictionary *)loadCurrentIconState:(id*)arg1;
- (NSDictionary *)loadDesiredIconState:(id*)arg1;
- (bool)saveCurrentIconState:(NSDictionary *)arg1 error:(id*)arg2;
- (bool)saveDesiredIconState:(NSDictionary *)arg1 error:(id*)arg2;

@end
