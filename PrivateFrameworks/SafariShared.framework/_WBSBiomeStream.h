
@interface _WBSBiomeStream : NSObject {
    NSString * _identifier;
    BMPruner * _pruner;
    BMSource * _source;
    BMStreamBase * _stream;
}

@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) BMPruner *pruner;
@property (nonatomic, readonly) BMSource *source;

- (void).cxx_destruct;
- (void)_fetchStream;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1;
- (id)pruner;
- (id)source;

@end
