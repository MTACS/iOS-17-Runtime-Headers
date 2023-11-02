
@interface SAPhoneCallHistory : SAPhoneCallSearchResult

@property (nonatomic, copy) NSNumber *blocked;
@property (nonatomic, copy) NSNumber *callCount;
@property (nonatomic, copy) NSNumber *faceTime;
@property (nonatomic, copy) NSNumber *faceTimeAudio;
@property (nonatomic, copy) NSNumber *missed;
@property (nonatomic, copy) NSNumber *outgoing;

+ (id)callHistory;
+ (id)callHistoryWithDictionary:(id)arg1 context:(id)arg2;

- (id)blocked;
- (id)callCount;
- (id)encodedClassName;
- (id)faceTime;
- (id)faceTimeAudio;
- (id)groupIdentifier;
- (id)missed;
- (id)outgoing;
- (void)setBlocked:(id)arg1;
- (void)setCallCount:(id)arg1;
- (void)setFaceTime:(id)arg1;
- (void)setFaceTimeAudio:(id)arg1;
- (void)setMissed:(id)arg1;
- (void)setOutgoing:(id)arg1;

@end
