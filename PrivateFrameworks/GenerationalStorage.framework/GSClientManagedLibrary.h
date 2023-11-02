
@interface GSClientManagedLibrary : NSObject <GSLibraryProtocol> {
    GSTemporaryStorage * _ts;
}

@property (nonatomic, readonly) NSString *nameSpace;
@property (nonatomic, readonly) NSObject<GSAdditionStoring> *storage;

- (void).cxx_destruct;
- (bool)generationsRemove:(id)arg1 error:(id*)arg2;
- (id)initWithURL:(id)arg1 error:(id*)arg2;
- (id)nameSpace;
- (id)storage;

@end
