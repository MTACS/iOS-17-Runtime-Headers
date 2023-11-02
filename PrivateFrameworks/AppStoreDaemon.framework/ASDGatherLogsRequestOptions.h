
@interface ASDGatherLogsRequestOptions : NSObject <NSCopying> {
    NSString * _fileName;
    NSArray * _urlFilters;
    bool  _verbose;
}

@property (nonatomic, copy) NSString *fileName;
@property (nonatomic, copy) NSArray *urlFilters;
@property (nonatomic) bool verbose;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)fileName;
- (void)setFileName:(id)arg1;
- (void)setUrlFilters:(id)arg1;
- (void)setVerbose:(bool)arg1;
- (id)urlFilters;
- (bool)verbose;

@end
