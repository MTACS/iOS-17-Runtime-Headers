
@interface PGLibraryChangeListenerStateStore : NSObject {
    NSURL * _changeTokenURL;
}

@property (nonatomic, readonly) PHPersistentChangeToken *changeToken;

- (void).cxx_destruct;
- (id)changeToken;
- (id)initWithPhotoLibrary:(id)arg1;
- (void)setChangeToken:(id)arg1;

@end
