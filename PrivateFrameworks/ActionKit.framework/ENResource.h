
@interface ENResource : NSObject {
    NSData * _data;
    NSData * _dataHash;
    NSDictionary * _edamAttributes;
    NSString * _filename;
    NSString * _guid;
    NSString * _mimeType;
    NSString * _sourceUrl;
}

@property (nonatomic, retain) NSData *data;
@property (nonatomic, retain) NSData *dataHash;
@property (nonatomic, retain) NSDictionary *edamAttributes;
@property (nonatomic, copy) NSString *filename;
@property (nonatomic, copy) NSString *guid;
@property (nonatomic, readonly) NSString *mediaTag;
@property (nonatomic, copy) NSString *mimeType;
@property (nonatomic, copy) NSString *sourceUrl;

+ (id)resourceWithServiceResource:(id)arg1;

- (void).cxx_destruct;
- (id)EDAMResource;
- (id)data;
- (id)dataHash;
- (id)edamAttributes;
- (id)filename;
- (id)guid;
- (id)initWithData:(id)arg1 mimeType:(id)arg2;
- (id)initWithData:(id)arg1 mimeType:(id)arg2 filename:(id)arg3;
- (id)mediaTag;
- (id)mimeType;
- (void)setData:(id)arg1;
- (void)setDataHash:(id)arg1;
- (void)setEdamAttributes:(id)arg1;
- (void)setFilename:(id)arg1;
- (void)setGuid:(id)arg1;
- (void)setMimeType:(id)arg1;
- (void)setSourceUrl:(id)arg1;
- (id)sourceUrl;

@end
