
@interface FKOrderMessagesPreviewMetadataImage : NSObject {
    NSData * _data;
    unsigned long long  _kind;
}

@property (nonatomic, readonly) NSData *data;
@property (nonatomic, readonly) unsigned long long kind;

- (void).cxx_destruct;
- (id)_initWithImage:(id)arg1;
- (id)data;
- (unsigned long long)kind;

@end
