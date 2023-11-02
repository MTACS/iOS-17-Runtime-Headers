
@interface MSCMSCompressedData : NSObject <MSCMSMessage> {
    void contentType;
    void dataContent;
    void embeddedContent;
    void type;
}

@property (nonatomic, retain) MSOID *contentType;
@property (nonatomic, copy) NSData *dataContent;
@property (nonatomic, retain) <MSCMSMessage> *embeddedContent;
@property (nonatomic, retain) MSOID *type;

+ (id)decodeMessageSecurityObject:(id)arg1 options:(id)arg2 error:(id*)arg3;

- (void).cxx_destruct;
- (id)contentType;
- (id)dataContent;
- (id)embeddedContent;
- (id)encodeMessageSecurityObject:(id*)arg1;
- (id)init;
- (id)initWithDataContent:(id)arg1 error:(id*)arg2;
- (id)initWithEmbeddedContent:(id)arg1 error:(id*)arg2;
- (void)setContentType:(id)arg1;
- (void)setDataContent:(id)arg1;
- (void)setEmbeddedContent:(id)arg1;
- (void)setType:(id)arg1;
- (id)type;

@end
