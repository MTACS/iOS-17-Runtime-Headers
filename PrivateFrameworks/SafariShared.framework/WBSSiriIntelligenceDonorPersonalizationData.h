
@interface WBSSiriIntelligenceDonorPersonalizationData : NSObject <NSCopying> {
    unsigned long long  _position;
    NSString * _searchQuery;
}

@property (nonatomic) unsigned long long position;
@property (nonatomic, copy) NSString *searchQuery;

- (void).cxx_destruct;
- (void)clearData;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)position;
- (id)searchQuery;
- (void)setPosition:(unsigned long long)arg1;
- (void)setSearchQuery:(id)arg1;

@end
