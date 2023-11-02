
@interface VUIDocumentContextDataMovie : VUIDocumentContextData {
    NSString * _movieID;
}

@property (nonatomic, readonly, copy) NSString *movieID;

- (void).cxx_destruct;
- (id)initWithMovieID:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)movieID;

@end
