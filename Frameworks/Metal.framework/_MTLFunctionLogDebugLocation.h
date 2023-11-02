
@interface _MTLFunctionLogDebugLocation : NSObject <MTLFunctionLogDebugLocation> {
    NSURL * _URL;
    MTLDebugLocation * _debugLocation;
}

@property (readonly) NSURL *URL;
@property (readonly) unsigned long long column;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSString *functionName;
@property (readonly) unsigned long long hash;
@property (readonly) unsigned long long line;
@property (readonly) Class superclass;

- (id)URL;
- (unsigned long long)column;
- (void)dealloc;
- (id)description;
- (id)functionName;
- (id)initWithDebugLocation:(id)arg1;
- (unsigned long long)line;

@end
