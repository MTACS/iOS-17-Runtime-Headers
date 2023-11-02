
@interface MPMediaLibraryConnectionAssertion : NSObject {
    NSString * _identifier;
    MPMediaLibrary * _library;
}

@property (nonatomic, readonly) NSString *identifier;

- (void).cxx_destruct;
- (id)_initWithMediaLibrary:(id)arg1 identifier:(id)arg2;
- (void)dealloc;
- (id)description;
- (id)identifier;

@end
