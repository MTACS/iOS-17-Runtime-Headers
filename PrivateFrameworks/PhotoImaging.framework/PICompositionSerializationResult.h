
@interface PICompositionSerializationResult : NSObject {
    NSData * _data;
    NSString * _formatIdentifier;
    NSString * _formatVersion;
}

@property (nonatomic, retain) NSData *data;
@property (nonatomic, retain) NSString *formatIdentifier;
@property (nonatomic, retain) NSString *formatVersion;

- (void).cxx_destruct;
- (id)data;
- (id)formatIdentifier;
- (id)formatVersion;
- (void)setData:(id)arg1;
- (void)setFormatIdentifier:(id)arg1;
- (void)setFormatVersion:(id)arg1;

@end
