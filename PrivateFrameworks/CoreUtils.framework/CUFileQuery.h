
@interface CUFileQuery : NSObject <CUDictionaryCodable> {
    id /* block */  _completionHandler;
    NSString * _path;
}

@property (nonatomic, copy) id /* block */ completionHandler;
@property (nonatomic, copy) NSString *path;

- (void).cxx_destruct;
- (id /* block */)completionHandler;
- (id)description;
- (void)encodeWithDictionary:(id)arg1;
- (id)initWithDictionary:(id)arg1 error:(id*)arg2;
- (id)path;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setPath:(id)arg1;

@end
