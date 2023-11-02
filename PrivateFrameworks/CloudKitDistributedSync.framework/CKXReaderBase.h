
@interface CKXReaderBase : NSObject {
    CKXSchema * _schema;
}

@property (nonatomic, readonly) CKXSchema *schema;

- (void).cxx_destruct;
- (id)initWithSchema:(id)arg1;
- (id)schema;

@end
