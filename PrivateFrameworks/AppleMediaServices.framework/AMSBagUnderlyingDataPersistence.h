
@interface AMSBagUnderlyingDataPersistence : NSObject {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  directoryURL;
}

+ (id)persistenceWithDefaultDirectory;

- (void).cxx_destruct;
- (id)init;
- (id)initWithDirectoryURL:(id)arg1;
- (bool)persist:(id)arg1 error:(id*)arg2;
- (bool)removeUnderlyingDataFor:(id)arg1 error:(id*)arg2;
- (id)underlyingDataFor:(id)arg1 error:(id*)arg2;

@end
