
@interface ML3MatcherAuxData : NSObject {
    CPSearchMatcher * _searchMatcher;
    char * _searchUTF8String;
}

- (void).cxx_destruct;
- (void)dealloc;

@end
