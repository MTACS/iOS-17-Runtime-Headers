
@interface SAWebVideoResult : SAWebImageResult

@property (nonatomic, copy) NSNumber *runTimeInMilliseconds;

+ (id)videoResult;
+ (id)videoResultWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)runTimeInMilliseconds;
- (void)setRunTimeInMilliseconds:(id)arg1;

@end
