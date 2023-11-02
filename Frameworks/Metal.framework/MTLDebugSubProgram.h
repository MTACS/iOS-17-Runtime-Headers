
@interface MTLDebugSubProgram : NSObject {
    MTLDebugInstrumentationData * _data;
    struct DebugSubProgram { unsigned int x1; unsigned int x2; unsigned int x3; } * _debugSubProgram;
}

@property (nonatomic, readonly) NSString *filename;
@property (nonatomic, readonly) unsigned int line;
@property (nonatomic, readonly) NSString *name;

- (id)filename;
- (unsigned int)line;
- (id)name;
- (oneway void)release;
- (oneway void)releaseInternal;
- (id)retain;

@end
