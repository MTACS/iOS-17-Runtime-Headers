
@interface VUIPlistMediaLibraryIdentifier : NSObject <VUIMediaLibraryIdentifier> {
    NSURL * _libraryFileURL;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSURL *libraryFileURL;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (id)initWithURL:(id)arg1;
- (id)libraryFileURL;
- (void)setLibraryFileURL:(id)arg1;

@end
