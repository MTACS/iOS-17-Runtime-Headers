
@interface FCVanityURLMapper : NSObject {
    NTPBVanityURLMapping * _vanityURLMapping;
}

@property (nonatomic, readonly, copy) NTPBVanityURLMapping *vanityURLMapping;

- (void).cxx_destruct;
- (id)URLForVanityURL:(id)arg1;
- (id)_pathWithTrailingForwardSlashWithPath:(id)arg1;
- (void)_setParametersIfNeededWithComponents:(id)arg1 parameters:(id)arg2;
- (void)_standardizeResultPath:(id)arg1;
- (id)_standardizedFragmentWithParameters:(id)arg1 fragment:(id)arg2;
- (id)_standardizedInputPathWithPath:(id)arg1;
- (id)_standardizedMappingPathWithPath:(id)arg1;
- (id)_standardizedQueryWithParameters:(id)arg1 query:(id)arg2;
- (id)init;
- (id)initWithVanityURLMapping:(id)arg1;
- (id)vanityURLMapping;

@end
