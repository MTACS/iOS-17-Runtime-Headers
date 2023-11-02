
@interface CDMRegexSpanMatcher : NSObject <CDMProtoSpanMatcher> {
    NSString * _cachedFilePath;
    NSNumber * _fileVersion;
    NSArray * _regexEntries;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)getNumberFormatter:(id)arg1;
+ (id)getNumberFormatterForOutput;
+ (id)getNumberString:(id)arg1 numberFormatter:(id)arg2 numberFormatterForOutput:(id)arg3 integerOnly:(bool)arg4;
+ (id)readRegexAssetFromPath:(id)arg1;

- (void).cxx_destruct;
- (id)initWithCachePath:(id)arg1;
- (id)matchSpansForTokenChain:(id)arg1;

@end
