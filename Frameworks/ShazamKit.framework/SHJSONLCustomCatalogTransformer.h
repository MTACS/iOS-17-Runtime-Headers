
@interface SHJSONLCustomCatalogTransformer : NSObject <SHJSONLDataDetokenizerDelegate> {
    <SHJSONLCustomCatalogTransformerDelegate> * _delegate;
    NSError * _error;
    NSDictionary * _header;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SHJSONLCustomCatalogTransformerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSError *error;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSDictionary *header;
@property (readonly) Class superclass;

+ (id)IDFromFileRow:(id)arg1;
+ (id)catalogFileRepresentationOfMediaItems:(id)arg1 withID:(id)arg2 error:(id*)arg3;
+ (id)catalogFileRepresentationOfSignature:(id)arg1 withID:(id)arg2;
+ (id)headerFromFileRow:(id)arg1;
+ (id)mediaItemFromFileRow:(id)arg1 error:(id*)arg2;
+ (bool)objectIsHeader:(id)arg1;
+ (bool)objectIsMediaItem:(id)arg1;
+ (bool)objectIsSignature:(id)arg1;
+ (id)outputFileHeader;
+ (id)signatureFromFileRow:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (id)delegate;
- (id)error;
- (id)header;
- (bool)parsedJSONObject:(id)arg1 error:(id*)arg2;
- (void)reset;
- (void)setDelegate:(id)arg1;
- (void)setError:(id)arg1;
- (void)setHeader:(id)arg1;

@end
