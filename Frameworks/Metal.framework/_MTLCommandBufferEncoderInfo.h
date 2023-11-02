
@interface _MTLCommandBufferEncoderInfo : NSObject <MTLCommandBufferEncoderInfo> {
    NSArray * _debugSignposts;
    long long  _errorState;
    unsigned long long  _globalTraceObjectID;
    NSString * _label;
    unsigned long long  _uniqueID;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) NSArray *debugSignposts;
@property (readonly, copy) NSString *description;
@property (nonatomic) long long errorState;
@property (nonatomic) unsigned long long globalTraceObjectID;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *label;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long uniqueID;

- (void)dealloc;
- (id)debugSignposts;
- (id)description;
- (long long)errorState;
- (unsigned long long)globalTraceObjectID;
- (id)label;
- (void)setDebugSignposts:(id)arg1;
- (void)setErrorState:(long long)arg1;
- (void)setGlobalTraceObjectID:(unsigned long long)arg1;
- (void)setLabel:(id)arg1;
- (void)setUniqueID:(unsigned long long)arg1;
- (unsigned long long)uniqueID;

@end
