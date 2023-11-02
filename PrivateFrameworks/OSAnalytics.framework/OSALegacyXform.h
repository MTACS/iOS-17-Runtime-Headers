
@interface OSALegacyXform : NSObject {
    NSMutableDictionary * _templates;
}

+ (id)rollSchemaForward:(id)arg1;
+ (id)transformURL:(id)arg1 options:(id)arg2;

- (void).cxx_destruct;
- (id)_getValueForKey:(id)arg1 fromBody:(id)arg2 orHeader:(id)arg3;
- (id)_hexDump:(id)arg1 offset:(int)arg2 indicator:(bool)arg3;
- (id)formatArm32ThreadState:(id)arg1 index:(int)arg2;
- (id)formatArm64ThreadState:(id)arg1 index:(int)arg2;
- (id)formatCallstacks:(id)arg1 withImages:(id)arg2 macosStyle:(bool)arg3;
- (id)formatFrame:(id)arg1 withImages:(id)arg2 macosStyle:(bool)arg3;
- (id)formatImages:(id)arg1 macosStyle:(bool)arg2;
- (id)formatInstructionState:(id)arg1 index:(int)arg2;
- (id)formatLastBranchState:(id)arg1 index:(int)arg2 withImages:(id)arg3;
- (id)formatLastException:(id)arg1 withImages:(id)arg2;
- (id)formatX86ThreadState:(id)arg1 index:(int)arg2;
- (id)init;
- (bool)prepareTemplate:(id)arg1 forLogType:(id)arg2 error:(id*)arg3;
- (bool)transformJSON:(id)arg1 header:(id)arg2 error:(id*)arg3 streamingBlock:(id /* block */)arg4;
- (bool)transformLines:(id)arg1 withDefinitions:(id)arg2 body:(id)arg3 header:(id)arg4 error:(id*)arg5 streamingBlock:(id /* block */)arg6;

@end
