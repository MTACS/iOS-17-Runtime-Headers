
@interface SAPerformDataDetectionResult : SABaseCommand <SAAceSerializable, SAServerBoundCommand>

@property (nonatomic, copy) NSString *aceId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *detectionTarget;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *matches;
@property (nonatomic, copy) NSString *refId;
@property (readonly) Class superclass;

+ (id)performDataDetectionResult;
+ (id)performDataDetectionResultWithDictionary:(id)arg1 context:(id)arg2;

- (id)detectionTarget;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)matches;
- (bool)requiresResponse;
- (void)setDetectionTarget:(id)arg1;
- (void)setMatches:(id)arg1;

@end
