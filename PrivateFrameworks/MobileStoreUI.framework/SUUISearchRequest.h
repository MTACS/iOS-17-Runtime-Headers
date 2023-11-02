
@interface SUUISearchRequest : NSObject <NSCopying> {
    NSNumber * _searchHintIndex;
    NSString * _searchHintOriginalTerm;
    NSString * _term;
    NSURL * _url;
}

@property (nonatomic, copy) NSURL *URL;
@property (nonatomic, copy) NSNumber *searchHintIndex;
@property (nonatomic, copy) NSString *searchHintOriginalTerm;
@property (nonatomic, copy) NSString *term;

- (void).cxx_destruct;
- (id)URL;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)searchHintIndex;
- (id)searchHintOriginalTerm;
- (void)setSearchHintIndex:(id)arg1;
- (void)setSearchHintOriginalTerm:(id)arg1;
- (void)setTerm:(id)arg1;
- (void)setURL:(id)arg1;
- (id)term;

@end
