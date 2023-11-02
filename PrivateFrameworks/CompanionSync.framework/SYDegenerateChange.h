
@interface SYDegenerateChange : NSObject <SYChange>

@property (nonatomic, readonly) long long changeType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *objectIdentifier;
@property (nonatomic, readonly) NSString *sequencer;
@property (readonly) Class superclass;

+ (id)degenerateChange;
+ (bool)isDegenerate:(id)arg1;

- (long long)changeType;
- (id)objectIdentifier;
- (id)sequencer;

@end
