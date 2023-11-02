
@interface DACPLogShared : NSObject {
    NSMutableDictionary * _UUIDToFileMap;
}

+ (id)shared;

- (void).cxx_destruct;
- (bool)_array:(id)arg1 beginsWithArray:(id)arg2 outRemainingArray:(id*)arg3;
- (id)_getUUIDForFolder:(id)arg1 baseName:(id)arg2;
- (bool)_logData:(id)arg1 UUID:(id)arg2 startNewFile:(bool)arg3 sizeCheck:(long long)arg4 wantsCompressed:(bool)arg5 maxFileCount:(long long)arg6 outDidCreateNewFile:(bool*)arg7 outNewFilePath:(id*)arg8;
- (bool)_slurpToFileUUID:(id)arg1 slurpeeFileDescriptor:(int)arg2 prefix:(id)arg3 suffix:(id)arg4 startNewFile:(bool)arg5 sizeCheck:(long long)arg6 wantsCompressed:(bool)arg7 maxLogFileCount:(int)arg8 outDidCreateNewFile:(bool*)arg9 outNewFilePath:(id*)arg10;
- (id)init;

@end
