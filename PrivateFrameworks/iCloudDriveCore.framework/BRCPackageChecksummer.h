
@interface BRCPackageChecksummer : NSObject {
    BRCChecksummingOutputStream * _stream;
}

@property (nonatomic, readonly) NSData *signature;

- (void).cxx_destruct;
- (bool)addItem:(id)arg1 error:(id*)arg2;
- (void)done;
- (id)init;
- (id)signature;

@end
