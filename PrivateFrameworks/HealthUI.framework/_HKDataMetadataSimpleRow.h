
@interface _HKDataMetadataSimpleRow : NSObject {
    NSString * _baseIdentifier;
    NSString * _detail;
    NSString * _text;
}

@property (nonatomic, retain) NSString *baseIdentifier;
@property (nonatomic, retain) NSString *detail;
@property (nonatomic, retain) NSString *text;

- (void).cxx_destruct;
- (id)baseIdentifier;
- (id)detail;
- (void)setBaseIdentifier:(id)arg1;
- (void)setDetail:(id)arg1;
- (void)setText:(id)arg1;
- (id)text;

@end
