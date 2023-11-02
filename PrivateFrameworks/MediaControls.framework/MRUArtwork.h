
@interface MRUArtwork : NSObject {
    UIImage * _image;
    NSString * _placeholderSymbolName;
    MPCPlayerResponse * _response;
}

@property (nonatomic, readonly) MPArtworkCatalog *catalog;
@property (nonatomic, retain) UIImage *image;
@property (nonatomic, readonly) NSString *placeholderSymbolName;
@property (nonatomic, retain) MPCPlayerResponse *response;

- (void).cxx_destruct;
- (id)catalog;
- (id)description;
- (id)image;
- (id)initWithImage:(id)arg1 placeholderSymbolName:(id)arg2;
- (id)initWithMPCResponse:(id)arg1 placeholderSymbolName:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)placeholderSymbolName;
- (id)response;
- (void)setImage:(id)arg1;
- (void)setResponse:(id)arg1;

@end
