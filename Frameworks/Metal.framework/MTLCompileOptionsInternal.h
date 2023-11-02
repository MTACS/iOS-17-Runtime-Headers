
@interface MTLCompileOptionsInternal : MTLCompileOptions {
    NSString * _additionalCompilerArguments;
    bool  _allowReferencingUndefinedSymbols;
    long long  _compileSymbolVisibility;
    bool  _compileTimeStatisticsEnabled;
    bool  _debuggingEnabled;
    bool  _fastMathEnabled;
    bool  _glBufferBindPoints;
    NSString * _installName;
    unsigned long long  _languageVersion;
    NSArray * _libraries;
    long long  _libraryType;
    unsigned long long  _maxTotalThreadsPerThreadgroup;
    long long  _optimizationLevel;
    NSDictionary * _preprocessorMacros;
    bool  _preserveInvariance;
    unsigned char  _sourceLanguage;
    bool  _tracingEnabled;
    bool  _userSetLanguageVersion;
}

- (id)additionalCompilerArguments;
- (bool)allowReferencingUndefinedSymbols;
- (long long)compileSymbolVisibility;
- (bool)compileTimeStatisticsEnabled;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (bool)debuggingEnabled;
- (id)description;
- (id)exportDictionary;
- (bool)fastMathEnabled;
- (id)formattedDescription:(unsigned long long)arg1;
- (bool)glBufferBindPoints;
- (unsigned long long)hash;
- (void)importDictionary:(id)arg1;
- (id)init;
- (id)installName;
- (bool)isEqual:(id)arg1;
- (unsigned long long)languageVersion;
- (id)libraries;
- (long long)libraryType;
- (unsigned long long)maxTotalThreadsPerThreadgroup;
- (long long)optimizationLevel;
- (id)preprocessorMacros;
- (bool)preserveInvariance;
- (void)setAdditionalCompilerArguments:(id)arg1;
- (void)setAllowReferencingUndefinedSymbols:(bool)arg1;
- (void)setCompileSymbolVisibility:(long long)arg1;
- (void)setCompileTimeStatisticsEnabled:(bool)arg1;
- (void)setDebuggingEnabled:(bool)arg1;
- (void)setFastMathEnabled:(bool)arg1;
- (void)setGlBufferBindPoints:(bool)arg1;
- (void)setInstallName:(id)arg1;
- (void)setLanguageVersion:(unsigned long long)arg1;
- (void)setLibraries:(id)arg1;
- (void)setLibraryType:(long long)arg1;
- (void)setMaxTotalThreadsPerThreadgroup:(unsigned long long)arg1;
- (void)setOptimizationLevel:(long long)arg1;
- (void)setPreprocessorMacros:(id)arg1;
- (void)setPreserveInvariance:(bool)arg1;
- (void)setSourceLanguage:(unsigned char)arg1;
- (void)setTracingEnabled:(bool)arg1;
- (unsigned char)sourceLanguage;
- (bool)tracingEnabled;

@end
