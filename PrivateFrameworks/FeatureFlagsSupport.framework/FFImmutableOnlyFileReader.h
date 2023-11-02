
@interface FFImmutableOnlyFileReader : NSObject <FFFileReader> {
    NSString * _immutableInternalPathPrefix;
    NSString * _immutablePathPrefix;
    <FFFileReader> * _underlying;
}

@property (nonatomic, retain) NSString *immutableInternalPathPrefix;
@property (nonatomic, retain) NSString *immutablePathPrefix;
@property (nonatomic, retain) <FFFileReader> *underlying;

- (void).cxx_destruct;
- (id)contentsOfDirectoryAtURL:(id)arg1 error:(id*)arg2;
- (id)dictionaryWithContentsOfURL:(id)arg1 error:(id*)arg2;
- (id)immutableInternalPathPrefix;
- (id)immutablePathPrefix;
- (id)init;
- (void)setImmutableInternalPathPrefix:(id)arg1;
- (void)setImmutablePathPrefix:(id)arg1;
- (void)setUnderlying:(id)arg1;
- (id)underlying;

@end
