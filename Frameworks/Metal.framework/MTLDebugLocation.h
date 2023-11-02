
@interface MTLDebugLocation : NSObject {
    MTLDebugInstrumentationData * _data;
    struct DebugLocation { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; } * _debugLoc;
}

@property (nonatomic, readonly) unsigned int column;
@property (nonatomic, readonly) MTLDebugLocation *inlinedAt;
@property (nonatomic, readonly) unsigned int line;
@property (nonatomic, readonly) MTLDebugSubProgram *scope;

- (unsigned int)column;
- (void)dealloc;
- (id)description;
- (id)formattedDescription:(unsigned long long)arg1;
- (id)inlinedAt;
- (unsigned int)line;
- (oneway void)release;
- (oneway void)releaseInternal;
- (id)retain;
- (id)scope;

@end
