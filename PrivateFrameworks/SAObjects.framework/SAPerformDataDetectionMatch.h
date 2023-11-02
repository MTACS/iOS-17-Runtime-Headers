
@interface SAPerformDataDetectionMatch : SABaseCommand <SAAceSerializable, SAServerBoundCommand>

@property (nonatomic, copy) NSString *aceId;
@property (nonatomic, copy) NSString *dataDetectionType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSNumber *length;
@property (nonatomic, copy) NSNumber *location;
@property (nonatomic, copy) NSString *refId;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *value;

+ (id)performDataDetectionMatch;
+ (id)performDataDetectionMatchWithDictionary:(id)arg1 context:(id)arg2;

- (id)dataDetectionType;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)length;
- (id)location;
- (bool)requiresResponse;
- (void)setDataDetectionType:(id)arg1;
- (void)setLength:(id)arg1;
- (void)setLocation:(id)arg1;
- (void)setValue:(id)arg1;
- (id)value;

@end
