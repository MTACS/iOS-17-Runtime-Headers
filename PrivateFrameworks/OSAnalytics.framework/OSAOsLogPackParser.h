
@interface OSAOsLogPackParser : NSObject {
    NSString * _formatString;
    bool  _formatStringIsImmutable;
    NSString * _formatStringOriginatingModulePath;
    id /* block */  _modulePathForImmutableMemoryPointer;
    id /* block */  _pointerPointsToImmutableMemory;
    id /* block */  _readCStringFromTarget;
}

@property (copy) NSString *formatString;
@property bool formatStringIsImmutable;
@property (copy) NSString *formatStringOriginatingModulePath;
@property (copy) id /* block */ modulePathForImmutableMemoryPointer;
@property (copy) id /* block */ pointerPointsToImmutableMemory;
@property (copy) id /* block */ readCStringFromTarget;

- (void).cxx_destruct;
- (id)compose:(id)arg1;
- (id)extractArguments:(id)arg1;
- (id)filterOutSensitiveStrings:(id)arg1;
- (id)formatString;
- (bool)formatStringIsImmutable;
- (id)formatStringOriginatingModulePath;
- (id /* block */)modulePathForImmutableMemoryPointer;
- (id)parse:(id)arg1;
- (id /* block */)pointerPointsToImmutableMemory;
- (id /* block */)readCStringFromTarget;
- (void)setFormatString:(id)arg1;
- (void)setFormatStringIsImmutable:(bool)arg1;
- (void)setFormatStringOriginatingModulePath:(id)arg1;
- (void)setModulePathForImmutableMemoryPointer:(id /* block */)arg1;
- (void)setPointerPointsToImmutableMemory:(id /* block */)arg1;
- (void)setReadCStringFromTarget:(id /* block */)arg1;

@end
