
@interface BCImageStore : NSObject {
    NSData * _data;
    NSDictionary * _dictionary;
    NSArray * _rawArray;
}

@property (nonatomic, retain) NSDictionary *dictionary;
@property (nonatomic, retain) NSArray *rawArray;

- (void).cxx_destruct;
- (id)dictionary;
- (id)initWithArray:(id)arg1;
- (id)initWithData:(id)arg1;
- (id)initWithImages:(id)arg1;
- (id)rawArray;
- (void)setDictionary:(id)arg1;
- (void)setRawArray:(id)arg1;

@end
